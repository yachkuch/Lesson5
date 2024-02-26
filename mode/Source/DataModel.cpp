#include "DataModel.h"
namespace mod
{
    DataModel::DataModel()
    {
        // TODO: Needs implementation
    }

    DataModel::~DataModel()
    {
        // TODO: Needs implementation
    }

    void DataModel::updateState(tipeResive type, std::unique_ptr<dataResive> data)
    {
        ///После вызова каждого сценария формируется при необходимости информация и отправляется на 
        ///ui например как в case tipeResive::ADD_NEW_DOC
        switch (type)
        {
        case tipeResive::ADD_NEW_DOC:
            // Код для добавления нового документа
            if(sendFunc){
                std::unique_ptr<dataSend> data2 = std::make_unique<dataSend>();
                sendFunc(static_cast<int>(tipeSend::ADD_NEW_DOC), std::move(data2));
            } else {
                std::cout << "sendFunc is null" << std::endl;
            }
            break;
        case tipeResive::IMPORT_DOC:{
            // Код для импорта документа документа
            break;
        }
        default:
            break;
        }
    }
} // namespace mod
