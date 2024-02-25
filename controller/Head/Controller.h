#ifndef __CONTROLLER_H_AIUQXMR86YVB__
#define __CONTROLLER_H_AIUQXMR86YVB__

#include <functional>
#ifndef __DATA_TYPE_H_EHONJ2LKOE69__
#include "dataType.h"
#endif
#include <memory>
namespace contr
{
    ///////////////////////////////////////////////////////////
    /// @brief Controller Контроллер
    ///
    class Controller
    {
        using tipeResive = ClassCommunication::dataTipe::dataTypeUIController;
        using tipeSend = ClassCommunication::dataTipe::dataTypeControllerModel;
        using dataResive = ClassCommunication::data::dataUIController;
        using dataSend = ClassCommunication::data::TypeControllerModel;
        using event = std::function<void(int, std::unique_ptr<dataResive>)>;

    public:
        Controller();
        ~Controller();
        /// @brief Обновляет состояние
        /// @param tipe тип данных, пришедших на обновление
        /// @param data данные пришедшие для обновления
        void updateState(tipeResive tipe, std::unique_ptr<dataResive> data);
        /// @brief Метод который позволяет установить соединение с классом в который будет необходимо
        /// передать состояние контроллера
        /// @param connectMethod метод в который подключаемый класс будет получать имнформацию
        template <typename F, class O>
        void setConnect(F method, O &obj)
        {
            auto sendFunc2 = std::bind(method, std::ref(obj), std::placeholders::_1, std::placeholders::_2);
        };

    private:
        std::function<void(tipeSend tipe, std::unique_ptr<dataSend> data)> sendFunc = nullptr;
    };
} // namespace contr
#endif // __CONTROLLER_H_AIUQXMR86YVB__
