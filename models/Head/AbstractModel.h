#ifndef __ABSTRACT_MODEL_H_R6MJ0U73GSKA__
#define __ABSTRACT_MODEL_H_R6MJ0U73GSKA__

///////////////////////////////////////////////////////////
/// @brief AbstractModel Абстрактная модель для отрисовки фигур редактора
/// 

// Некая библиотека, отвечающая за цвета
//#include <color>
/// Для получения доступа к событиям кливиатуры и мыши
#include <windows.h>

#include "Tipes_models.h"

namespace Models {
class AbstractModel
{
    using Tipe = ModelTipes::eTipeModels;

public:
    AbstractModel(Tipe tipe = Tipe::NONE);
    virtual ~AbstractModel(); 
    AbstractModel(const AbstractModel &other) ;
    AbstractModel(AbstractModel &&other)noexcept;
    AbstractModel &operator=(const AbstractModel &other);
    AbstractModel &operator=(AbstractModel &&other) noexcept;
    /// @brief Обработчик событий мыши и клавиатуры
    void eventHandler();
    /// @brief  Метод рисовки фигуры на экрне вызывается в том случае, если 
    /// с фигурой взаимодействовали
    virtual void paintEvent();

protected:
    int color = 0;
    int middle_point_x = 0;
    int middle_point_y = 0;
    Tipe tipe = Tipe::NONE;
};
}  // namespace Models
#endif  // __ABSTRACT_MODEL_H_R6MJ0U73GSKA__
