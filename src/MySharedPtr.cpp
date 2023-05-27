#include "MySharedPtr.hpp"

MySharedPtr::MySharedPtr()
    : ptr(nullptr), ref_count(new size_t(0)) 
{}