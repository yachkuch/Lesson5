#include "AbstractModel.h"

AbstractModel::AbstractModel()
{
    // TODO: Needs implementation
}

AbstractModel::AbstractModel(const AbstractModel& other)
{
    // TODO: Needs implementation
}

AbstractModel::AbstractModel(AbstractModel&& other)
{
    // TODO: Needs implementation
}

AbstractModel& AbstractModel::operator=(const AbstractModel &other)
{
    // TODO: Needs implementation
}

AbstractModel& AbstractModel::operator=(AbstractModel &&other)
{
    // TODO: Needs implementation
}

void AbstractModel::eventHandler()
{
    // Обработка событий мыши и клавиатуры, например отлавливание клика по фигуре перетаскивание 
    // и т д
    paintEvent();
}

AbstractModel::~AbstractModel()
{
    
}

