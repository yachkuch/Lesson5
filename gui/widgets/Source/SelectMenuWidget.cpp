#include "SelectMenuWidget.h"

SelectMenuWidget::SelectMenuWidget()
{
    configurateAllButtons();
}

SelectMenuWidget::~SelectMenuWidget()
{
   
}

void SelectMenuWidget::configurateAllButtons()
{
    // В общий контейнер кнопок происходит добавленеи самих кнопок

    all_buttoms = {{tipe_buttom::ADD_NEW,Buttom()}};
}
