#include <iostream>
#include "MainWindow.h"
#include "Controller.h"
#include "DataModel.h"
#include<functional>
#include<memory>
// #ifndef __DATA_TYPE_H_EHONJ2LKOE69__
// #include "dataType.h"
// #endif
int main(int, char **) {
  MainWindow main_window;
  contr::Controller control;
  mod::DataModel  model;
  // control.setConnect(std::function<void(ClassCommunication::dataTipe::dataTypeModelUI tipe,
  //  std::unique_ptr<dataSend> data)>(model::setConnect));
  main_window.exec();
}
