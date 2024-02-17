#ifndef __BUTTOM_H_3ULB4HIODWUQ__
#define __BUTTOM_H_3ULB4HIODWUQ__

///////////////////////////////////////////////////////////
/// @brief Buttom Абстрактный класс кнопок
///
class Buttom
{
public:
    Buttom();
    virtual ~Buttom() = 0; 
    Buttom(const Buttom &other) = delete;
    Buttom(Buttom &&other) = delete;
    Buttom &operator=(const Buttom &other) = delete;
    Buttom &operator=(Buttom &&other) = delete;

private:
    // Members
};

#endif  // __BUTTOM_H_3ULB4HIODWUQ__
