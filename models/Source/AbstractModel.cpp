#include "AbstractModel.h"
namespace Models
{
    AbstractModel::AbstractModel(Tipe tipe)
    {
        this->tipe = tipe;
    }

    AbstractModel::AbstractModel(const AbstractModel &other)
    {
        // TODO: Needs implementation
    }

    AbstractModel::AbstractModel(AbstractModel &&other) noexcept
    {
        // TODO: Needs implementation
    }

    AbstractModel &AbstractModel::operator=(const AbstractModel &other)
    {
        // TODO: Needs implementation
    }

    AbstractModel &AbstractModel::operator=(AbstractModel &&other) noexcept
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
    void AbstractModel::paintEvent()
    {
    }
} // namespace Models
