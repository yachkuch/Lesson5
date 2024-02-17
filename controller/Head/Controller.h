#ifndef __CONTROLLER_H_AIUQXMR86YVB__
#define __CONTROLLER_H_AIUQXMR86YVB__

///////////////////////////////////////////////////////////
/// @brief Controller Контроллер
/// 
class Controller
{
public:
    Controller();
    ~Controller(); // TODO: Is VIRTUAL needed?
    Controller(const Controller &other) = delete;
    Controller(Controller &&other)= delete;
    Controller &operator=(const Controller &other) = delete;
    Controller &operator=(Controller &&other)= delete;

private:
    // Members
};

#endif  // __CONTROLLER_H_AIUQXMR86YVB__
