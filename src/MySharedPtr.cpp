#include "MySharedPtr.hpp"

MySharedPtr::MySharedPtr()
    : _ptr(nullptr), _ref_count(new uint(0)) 
{}

MySharedPtr::MySharedPtr(const MySharedPtr& other)
{
    _ptr = other._ptr;
    _ref_count = other._ref_count;
    if (other._ref_count != nullptr)
    {
        *_ref_count++;
    }
}

void MySharedPtr::operator=(const MySharedPtr& other)
{
    _ptr = other._ptr;
    _ref_count = other._ref_count;
    if (other._ref_count != nullptr)
    {
        *_ref_count++;
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