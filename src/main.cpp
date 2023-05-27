#include "MyUniquePtr.hpp"
#include "MySharedPtr.hpp"

#include <iostream>

int main()
{
    MyUniquePtr ptr1; // default c'tor
    
    int* x = new int(5);
    std::cout << *x << std::endl;
    

    {
        MyUniquePtr ptr4(x); 
        std::cout << *ptr4 << std::endl;
    }
    std::cout << *x << std::endl;

    MySharedPtr shared_p1(new int(5));
    std::cout << shared_p1.get_count() << std::endl;

    return EXIT_SUCCESS;
}