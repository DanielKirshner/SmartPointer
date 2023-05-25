#include "MyUniquePtr.hpp"

MyUniquePtr::MyUniquePtr()
{
    this->_pointer = nullptr;
}

MyUniquePtr::MyUniquePtr(void* pointer)
{
    this->_pointer = pointer;
}

MyUniquePtr::~MyUniquePtr()
{
    
}