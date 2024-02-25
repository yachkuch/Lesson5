#include "MainWindow.h"
#include <iostream>
#include <format>

namespace MainWind
{
    void MainWindow::exec()
    {
    }

    void MainWindow::updateState(int tipe, std::unique_ptr<ClassCommunication::data::TypeModelUI> data)
    {
        std::format("State model update ");
    }
    void MainWindow::initialize()
    {
        
    }

    void MainWindow::addNewDocument()
    {
        std::format("Added new document utton press ");
    }
    
} // namespace Main