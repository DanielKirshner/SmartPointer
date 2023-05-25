#include "MyUniquePtr.hpp"

MyUniquePtr::MyUniquePtr()
{
    _pointer = nullptr;
}

MyUniquePtr::MyUniquePtr(void* pointer)
{
    _pointer = pointer;
}

MyUniquePtr::~MyUniquePtr()
{
    delete [] _pointer;
}