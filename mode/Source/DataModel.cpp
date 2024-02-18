#include "DataModel.h"
namespace mod{
DataModel::DataModel()
{
    // TODO: Needs implementation
}

DataModel::~DataModel()
{
    // TODO: Needs implementation
}

void DataModel::updateState(tipeResive tipe, std::unique_ptr<dataResive> data) {
}
void DataModel::setConnect(
    std::function<void(tipeSend tipe, std::unique_ptr<dataSend> data)>
        connectMethod) {}
} // namespace mod
