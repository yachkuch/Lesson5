#include <iostream>
#include "Main.h"

struct first
{
    typedef std::function<void()>
        event;

    event setMethod;

    template <typename F, class O>
    void set(F method, O &obj)
    {
        setMethod = std::bind(method, std::ref(obj));
    }

    void work()
    {
        if (setMethod)
            setMethod();
        else
            std::cout << "event not ready...\n";
    }
};

struct second
{
    void work() { std::cout << "second::work\n"; }

    void operator()() { work(); }
};

int main(int, char **)
{
    Main::Main a();

    first f;
    second s;

    f.set( &second::work, s ); 
    f.work();

    system("pause");
}
