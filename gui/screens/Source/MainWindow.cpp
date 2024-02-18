#include "MainWindow.h"
#include <iostream>
#include <format>

namespace MainWind
{
    MainWindow::MainWindow() : select_menu()
    {
    }

    MainWindow::~MainWindow()
    {
    }

    void MainWindow::exec()
    {
    }

    // void MainWindow::updateState(tipeResive tipe, std::unique_ptr<dataResive> data)
    // {
    //     std::format("State model update ");
    // }

    void MainWindow::addNewDocument()
    {
        std::format("Added new document utton press ");
    }

} // namespace Main