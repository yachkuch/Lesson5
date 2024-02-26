#ifndef __DATA_TYPE_H_EHONJ2LKOE69__
#define DATA_TYPE_H_EHONJ2LKOE69_
#include <memory>

#ifndef __CIRCLECustom_H_3PMJVQ2DG8D4__
    #include "CircleCustom.h"
    #endif
    
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
            
            ADD_NEW_DOC,
            IMPORT_DOC,
            EXPORT_DOC,
            NEW_VIEW,
            DELETE_VIEW

        };

        /// @brief Сообщения между контроллером и моделью
        enum class dataTypeControllerModel : int
        {
            ADD_NEW_DOC,
            IMPORT_DOC,
            EXPORT_DOC,
            NEW_VIEW,
            DELETE_VIEW
        };

        /// @brief Сообщения между моделью и контроллером
        enum class dataTypeModelUI : int
        {
            
            ADD_NEW_DOC,
            IMPORT_DOC,
            EXPORT_DOC,
            NEW_VIEW,
            DELETE_VIEW

        };

    } // namespace dataTipe
/////////////////////////////////////////////////////////////////////////////
/// @brief dataType Типы сообщений передаваемые между классами внутрь юниона 
// оборачивается любая необходимая и
    namespace data
    {

        /// @brief Сообщения между UI и контроллером
        union dataUIController
        {
            int a;
            Models::CircleCustom circle;
        };

        /// @brief Сообщения между контроллером и моделью
        union TypeControllerModel
        {
            int a;
        };

        /// @brief Сообщения между моделью и контроллером
        union TypeModelUI
        {
            int a;
        };
    } // namespace data

} // namespace ClassCommunication


#endif // __DATA_TYPE_H_EHONJ2LKOE69__
