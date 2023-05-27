#include "MySharedPtr.hpp"

MySharedPtr::MySharedPtr()
    : ptr(nullptr), ref_count(new size_t(0)) 
{}

MySharedPtr::MySharedPtr(const MySharedPtr& other)
{
    ptr = other.ptr;
    ref_count = other.ref_count;
    if (other.ref_count != nullptr)
    {
        *ref_count++;
    }
}

MySharedPtr& MySharedPtr::operator=(const MySharedPtr& other)
{
    ptr = other.ptr;
    ref_count = other.ref_count;
    if (other.ref_count != nullptr)
    {
        *ref_count++;
    }
}