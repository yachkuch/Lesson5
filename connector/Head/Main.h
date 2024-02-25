#ifndef __MAIN_H_ANJ9I4RZ0NNC__
#define __MAIN_H_ANJ9I4RZ0NNC__
#include "MainWindow.h"
#include "Controller.h"
#include "DataModel.h"
#include <functional>
#include <memory>
#include<iostream>
namespace Main
{
#ifndef __DATA_TYPE_H_EHONJ2LKOE69__
#include "dataType.h"
#endif
    ///////////////////////////////////////////////////////////
    /// @brief Main Главный класс всего приложения
    ///
    class Main
    {
    public:
        Main();
        ~Main(); // TODO: Is VIRTUAL needed?
        void run(){
            std::cout<<"sdfkk"<<std::endl;
        };

    private:
        // Members
    };
} // namespace Main
#endif // __MAIN_H_ANJ9I4RZ0NNC__
