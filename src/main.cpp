#include "MyUniquePtr.hpp"
#include <iostream>

int main()
{
    MyUniquePtr ptr1(); // default c'tor
    // MyUniquePtr ptr2(ptr1); // error, deleted copy c'tor

    return EXIT_SUCCESS;
}