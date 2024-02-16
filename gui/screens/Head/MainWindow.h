#ifndef __MAIN_WINDOW_H_LHRGX6LRWPJV__
#define __MAIN_WINDOW_H_LHRGX6LRWPJV__

///////////////////////////////////////////////////////////
/// @brief MainWindow Класс главного окна в котором и идет работа с приложением
///

#include "SelectMenuWidget.h"

class MainWindow
{
public:
    MainWindow();
    ~MainWindow();
    MainWindow(const MainWindow &other) = delete;
    MainWindow(MainWindow &&other) = delete;
    MainWindow &operator=(const MainWindow &other) = delete;
    MainWindow &operator=(MainWindow &&other) = delete;

private:
    // Members
};

#endif  // __MAIN_WINDOW_H_LHRGX6LRWPJV__
