#ifndef __MAIN_WINDOW_H_LHRGX6LRWPJV__
#define __MAIN_WINDOW_H_LHRGX6LRWPJV__

#ifndef __SELECT_MENU_WIDGET_H_UMSXSW9Y6AGY__
#include "SelectMenuWidget.h"
#endif

#include <functional>
#include <memory>

#ifndef __CIRCLECustom_H_3PMJVQ2DG8D4__
#include"CircleCustom.h"
#endif

///////////////////////////////////////////////////////////
/// @brief MainWindow Класс главного окна в котором и идет работа с приложением
///
/// TODO: Обязательно реализовать создание объектов с использованием фабричного метода проектирования
namespace MainWind
{
#ifndef __DATA_TYPE_H_EHONJ2LKOE69__
#include "dataType.h"
#endif

    class MainWindow
    {
        using tipeResive = ClassCommunication::dataTipe::dataTypeModelUI;
        using tipeSend = ClassCommunication::dataTipe::dataTypeUIController;
        using dataResive = ClassCommunication::data::TypeModelUI;
        using dataSend = ClassCommunication::data::dataUIController;
        using update = std::function<void(tipeResive tipe, std::unique_ptr<dataResive> data)>;
        using event = std::function<void(tipeSend tipe, std::unique_ptr<dataSend> data)>;

    public:
        /// @brief Метод разворачивает сконфигурированное окно
        MainWindow();
        void exec();
        void updateState(int tipe, std::unique_ptr<dataResive> data);
        void initialize();
         template <typename F, class O>
        void setConnect(F method, O &obj)
        {
           auto sendFunc2 = std::bind(method, std::ref(obj),std::placeholders::_1, std::placeholders::_2);
        };
        void operator()(int,std::unique_ptr<dataResive> ){};


    private:
        //********** Методы класса
        void addNewDocument();
        void addNewElement(int type);

        //**********Поля класса
        /// @brief Выплывающее меню
        SelectMenuWidget select_menu;
        event sendFunc = nullptr;

    }; 

} // namespace Main
#endif // __MAIN_WINDOW_H_LHRGX6LRWPJV__
