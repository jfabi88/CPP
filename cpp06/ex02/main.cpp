#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;  
}

void identify(Base& p)
{  
    try
    {
        A   data = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        return ;
    }
    catch(const std::exception& e){}
    try
    {
        B   data = dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        return ;
    }
    catch(const std::exception& e){}
    try
    {
        C   data = dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        return ;
    }
    catch(const std::exception& e){}
}

Base * generate(void)
{
    int     indx;

    srand(time(NULL));
    indx = rand() % 3;
    switch (indx)
    {
        case (0):
            return new A();
        case (1):
            return new B();
        case (2):
            return new C();
    }
    return NULL;
}

int main()
{
    Base    *data;

    data = generate();
    identify(data);
    identify(&(*data));
    delete (data);
    return (0);
}