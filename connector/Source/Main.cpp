#include "Main.h"

namespace Main
{

    Main::Main()
    {
        MainWind::MainWindow main_window;
        contr::Controller control;
        mod::DataModel model;
        model.setConnect(&MainWind::MainWindow::updateState,main_window);
        main_window.exec();
    }

    Main::~Main()
    {
        // TODO: Needs implementation
    }

} // namespace Main