#ifndef __DATA_MODEL_H_AS3KIDREOXTF__
#define __DATA_MODEL_H_AS3KIDREOXTF__
#include <memory>
#include <functional>
#include<typeinfo>
#include<iostream>
///////////////////////////////////////////////////////////
/// @brief DataModel Модель для работы с данными для ui
///
namespace mod
{
#ifndef __DATA_TYPE_H_EHONJ2LKOE69__
#include "dataType.h"
#endif

    class DataModel
    {
        using tipeResive = ClassCommunication::dataTipe::dataTypeControllerModel;
        using tipeSend = ClassCommunication::dataTipe::dataTypeModelUI;
        using dataResive = ClassCommunication::data::TypeControllerModel;
        using dataSend = ClassCommunication::data::TypeModelUI;
        using event = std::function<void(int , std::unique_ptr<dataResive> )>;

    public:
        DataModel();
        virtual ~DataModel(); 


        void updateState(tipeResive tipe, std::unique_ptr<dataResive> data);
        /// @brief Метод который позволяет установить соединение с классом в который будет необходимо
        /// передать состояние контроллера
        /// @param connectMethod метод в который подключаемый класс будет получать имнформацию
        template <typename F, class O>
        void setConnect(F method, O &obj)
        {
           auto sendFunc2 = std::bind(method, std::ref(obj),std::placeholders::_1, std::placeholders::_2);
        };

    private:
        event sendFunc = nullptr;
    };

} // namespace mod
#endif // __DATA_MODEL_H_AS3KIDREOXTF__
