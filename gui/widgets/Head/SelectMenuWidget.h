#ifndef __SELECT_MENU_WIDGET_H_UMSXSW9Y6AGY__
#define __SELECT_MENU_WIDGET_H_UMSXSW9Y6AGY__

///////////////////////////////////////////////////////////
/// @brief SelectMenuWidget Меню управления в котором по выбору можно добавлять удалять новые 
/// элементы и так далее 
///

#include<map>

#include "Buttom.h"

class SelectMenuWidget
{
public:
    SelectMenuWidget();
    ~SelectMenuWidget(); // TODO: Is VIRTUAL needed?
    SelectMenuWidget(const SelectMenuWidget &other) = delete;
    SelectMenuWidget(SelectMenuWidget &&other) = delete;
    SelectMenuWidget &operator=(const SelectMenuWidget &other) = delete;
    SelectMenuWidget &operator=(SelectMenuWidget &&other)  = delete;

private:
// 
enum class tipe_buttom : int{
    ADD_NEW,
    IMPORT,
    EXPORT,
    NEW_EL,
    DELET_EL
};

//******************Методы класса**************//
    /// @brief Конфигурирует набор кнопок в панели выбора, так как данная 
    // панель мы подразумеваем будет единственной сделаем довольно примитивно 
    // у нее не будет абстрактного класса
    void configurateAllButtons();


    //******************Данные класса**************//
    // std::map<tipe_buttom,Buttom> all_buttoms;
};


#endif  // __SELECT_MENU_WIDGET_H_UMSXSW9Y6AGY__
