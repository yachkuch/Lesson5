#include <iostream>
#include "MainWindow.h"
#include "Controller.h"
#include "DataModel.h"
int main(int, char **) {
  MainWindow main_window;
  Controller control;
  DataModel  model;
  main_window.exec();
}
