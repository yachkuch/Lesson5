#ifndef __DATA_MODEL_H_AS3KIDREOXTF__
#define __DATA_MODEL_H_AS3KIDREOXTF__
#include <memory>
#include <functional>

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
        using event = std::function<void(int tipe, std::unique_ptr<int> data)>;

    public:
        DataModel();
        virtual ~DataModel(); // TODO: Is VIRTUAL needed?
        DataModel(const DataModel &other) = delete;
        DataModel(DataModel &&other) = delete;
        DataModel &operator=(const DataModel &other) = delete;
        DataModel &operator=(DataModel &&other) = delete;

        void updateState(tipeResive tipe, std::unique_ptr<dataResive> data);
        /// @brief Метод который позволяет установить соединение с классом в который будет необходимо
        /// передать состояние контроллера
        /// @param connectMethod метод в который подключаемый класс будет получать имнформацию
        // void setConnect(std::function<void(tipeSend tipe, std::unique_ptr<dataSend> data)> connectMethod);
        template <typename F, class O>
        void setConnect(F method, O &obj)
        {
            //sendFunc = std::bind(method, std::ref(obj));
        };

    private:
        event sendFunc = nullptr;
    };

} // namespace mod
#endif // __DATA_MODEL_H_AS3KIDREOXTF__
