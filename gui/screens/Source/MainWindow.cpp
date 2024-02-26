#include "MainWindow.h"
#include <iostream>
#include <format>

namespace MainWind
{
    MainWindow::MainWindow()
    {
        // Инициализация всего окна
    }
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

    void MainWindow::addNewElement(int type)
    {
        switch (type)
        {
        case 1:
        {
            std::unique_ptr<Models::CircleCustom> cirlce = std::make_unique<Models::CircleCustom>();
            if (sendFunc)
            {
               // sendFunc(tipeSend::NEW_VIEW, std::move(cirlce));
            }
            else
            {
                std::cout << "No send function" << std::endl;
            }
            break;
        }
        case 2:
        {
            std::format("Added new element utton press ");
            break;
        }
        }
    }
} // namespace Main