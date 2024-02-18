#include "Controller.h"

namespace contr
{
    Controller::Controller()
    {
        // TODO: Needs implementation
    }

    Controller::~Controller()
    {
        // TODO: Needs implementation
    }

    void Controller::updateState(tipeResive tipe, std::unique_ptr<dataResive> data)
    {
    }

    void Controller::setConnect(
        std::function<void(tipeSend tipe, std::unique_ptr<dataSend> data)> connectMethod)
    {
        this->sendFunc = connectMethod;
    }
}