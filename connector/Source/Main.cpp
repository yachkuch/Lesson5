#include "Main.h"

namespace Main
{

    Main::Main()
    {
        MainWind::MainWindow main_window;
        contr::Controller control;
        mod::DataModel model;
        model.setConnect(&MainWind::MainWindow::updateState,main_window);
        main_window.setConnect(&mod::DataModel::updateState,control);
        control.setConnect(&mod::DataModel::updateState,model);
        main_window.exec();
    }

    Main::~Main()
    {
    }

} // namespace Main