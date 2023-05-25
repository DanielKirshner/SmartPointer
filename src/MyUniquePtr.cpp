#include "MyUniquePtr.hpp"

MyUniquePtr::MyUniquePtr()
{
    _pointer = nullptr;
}

MyUniquePtr::MyUniquePtr(void* pointer)
{
    _pointer = pointer;
}

MyUniquePtr::MyUniquePtr(MyUniquePtr&& other)
{
    _pointer = other._pointer;
    other._pointer = nullptr;
}

// void operator=(const MyUniquePtr&& other)
// {
//     _pointer = other._pointer;
//     other._pointer = nullptr;
// }

MyUniquePtr::~MyUniquePtr()
{
    delete [] _pointer;
}