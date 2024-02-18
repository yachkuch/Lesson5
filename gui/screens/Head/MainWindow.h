#ifndef __MAIN_WINDOW_H_LHRGX6LRWPJV__
#define __MAIN_WINDOW_H_LHRGX6LRWPJV__

#ifndef __SELECT_MENU_WIDGET_H_UMSXSW9Y6AGY__
#include "SelectMenuWidget.h"
#endif

#include <functional>
#include <memory>

///////////////////////////////////////////////////////////
/// @brief MainWindow Класс главного окна в котором и идет работа с приложением
///
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
    public:
        MainWindow();
        ~MainWindow();
        MainWindow(const MainWindow &other) = delete;
        MainWindow(MainWindow &&other) = delete;
        MainWindow &operator=(const MainWindow &other) = delete;
        MainWindow &operator=(MainWindow &&other) = delete;
        /// @brief Метод разворачивает сконфигурированное окно
        void exec();
        void updateState(int tipe, std::unique_ptr<int> data){};

    private:
        //********** Методы класса
        void addNewDocument();

        //**********Поля класса
        /// @brief Выплывающее меню
        SelectMenuWidget select_menu;
    };

} // namespace Main
#endif // __MAIN_WINDOW_H_LHRGX6LRWPJV__
