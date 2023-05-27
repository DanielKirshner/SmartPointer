#include "MySharedPtr.hpp"

MySharedPtr::MySharedPtr()
    : _ptr(nullptr), _ref_count(new uint(0)) 
{}

MySharedPtr::MySharedPtr(int* ptr)
    : _ptr(ptr), _ref_count(new uint(1))
{}

MySharedPtr::MySharedPtr(const MySharedPtr& other)
{
    _ptr = other._ptr;
    _ref_count = other._ref_count;
    if (other._ref_count != nullptr)
    {
        (*_ref_count)++;
    }
}

void MySharedPtr::operator=(const MySharedPtr& other)
{
    _ptr = other._ptr;
    _ref_count = other._ref_count;
    if (other._ref_count != nullptr)
    {
        (*_ref_count)++;
    }
}

MySharedPtr::MySharedPtr(MySharedPtr&& other)
{
    _ptr = other._ptr;
    _ref_count = other._ref_count;
    other._ptr = nullptr;
    other._ref_count = nullptr;
}

void MySharedPtr::operator=(MySharedPtr&& other)
{
    _ptr = other._ptr;
    _ref_count = other._ref_count;
    other._ptr = nullptr;
    other._ref_count = nullptr;
}

uint MySharedPtr::get_count() const
{
    return *_ref_count;
}

int* MySharedPtr::get_ptr() const
{
    return _ptr;
}

MySharedPtr::~MySharedPtr()
{
    try
    {
        (*_ref_count)--;
        if (*_ref_count == 0)
        {
            if (_ptr != nullptr)
                delete _ptr;
            delete _ref_count;
        }
    }
    catch(...)
    {}
}