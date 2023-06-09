#pragma once

typedef unsigned int uint;

class MySharedPtr final
{
    private: int* _ptr;
    private: uint* _ref_count;
    
    public: explicit MySharedPtr();
    public: explicit MySharedPtr(int* ptr);
    public: MySharedPtr(const MySharedPtr& other);
    public: MySharedPtr(MySharedPtr&& other);
    
    public: void operator=(const MySharedPtr& other);
    public: void operator=(MySharedPtr&& other);

    public: uint get_count() const;
    public: int* get_ptr() const;

    public: ~MySharedPtr();
};