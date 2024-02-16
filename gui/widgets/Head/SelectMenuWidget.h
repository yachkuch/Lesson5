#ifndef __SELECT_MENU_WIDGET_H_UMSXSW9Y6AGY__
#define __SELECT_MENU_WIDGET_H_UMSXSW9Y6AGY__

///////////////////////////////////////////////////////////
/// @brief SelectMenuWidget
///
class SelectMenuWidget
{
public:
    SelectMenuWidget();
    virtual ~SelectMenuWidget(); // TODO: Is VIRTUAL needed?
    SelectMenuWidget(const SelectMenuWidget &other);
    SelectMenuWidget(SelectMenuWidget &&other);
    SelectMenuWidget &operator=(const SelectMenuWidget &other);
    SelectMenuWidget &operator=(SelectMenuWidget &&other);

private:
    // Members
};

#endif  // __SELECT_MENU_WIDGET_H_UMSXSW9Y6AGY__
