#include "MyUniquePtr.hpp"

MyUniquePtr::MyUniquePtr()
    : _pointer(nullptr)
{}

MyUniquePtr::MyUniquePtr(int* pointer)
    : _pointer(pointer)
{}

MyUniquePtr::MyUniquePtr(MyUniquePtr&& other)
{
    _pointer = other._pointer;
    other._pointer = nullptr;
}

void MyUniquePtr::operator=(MyUniquePtr&& other)
{
    _pointer = other._pointer;
    other._pointer = nullptr;
}

int& MyUniquePtr::operator*() const
{
    return *((int*)_pointer);
}

MyUniquePtr::~MyUniquePtr()
{
    try
    {
        if(_pointer != nullptr)
        {
            delete _pointer;
        }   
    }
    catch(...)
    {}
}