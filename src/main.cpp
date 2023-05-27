#include "MyUniquePtr.hpp"
#include "MySharedPtr.hpp"

#include <iostream>

int main()
{
    int* x = new int(5);
    std::cout << *x << std::endl;
    {
        MyUniquePtr ptr4(x); 
        std::cout << *ptr4 << std::endl;
    }
    std::cout << *x << std::endl;

    std::cout << std::endl;

    int* x2 = new int(5);
    std::cout << *x2 << std::endl;
    {
        MySharedPtr shared_p1(x2);
        std::cout << "Ref. Count: " << shared_p1.get_count() << std::endl;
        {
            MySharedPtr shared_p2(shared_p1);
            std::cout << "Ref. Count: " << shared_p1.get_count() << std::endl;
        }
        std::cout << "Ref. Count: " << shared_p1.get_count() << std::endl;
        std::cout << *x2 << std::endl;
    }
    std::cout << *x2 << std::endl;

    return EXIT_SUCCESS;
}