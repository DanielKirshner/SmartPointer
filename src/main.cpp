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


    return EXIT_SUCCESS;
}