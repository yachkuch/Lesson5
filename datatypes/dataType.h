#ifndef __DATA_TYPE_H_EHONJ2LKOE69__
#define DATA_TYPE_H_EHONJ2LKOE69_

///////////////////////////////////////////////////////////
/// @brief dataType Типы сообщений передаваемые между классами
///
namespace ClassCommunication
{
    namespace dataTipe
    {
        /// @brief Сообщения между UI и контроллером
        enum class dataTypeUIController : int
        {

        };

        /// @brief Сообщения между контроллером и моделью
        enum class dataTypeControllerModel : int
        {

        };

        /// @brief Сообщения между моделью и контроллером
        enum class dataTypeModelUI : int
        {

        };

    } // namespace dataTipe

    namespace data
    {
        /// @brief Сообщения между UI и контроллером
        union dataUIController
        {
        };

        /// @brief Сообщения между контроллером и моделью
        union TypeControllerModel
        {
        };

        /// @brief Сообщения между моделью и контроллером
        union TypeModelUI
        {
        };
    } // namespace data

} // namespace ClassCommunication
#endif // __DATA_TYPE_H_EHONJ2LKOE69__
