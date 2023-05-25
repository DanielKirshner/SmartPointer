#pragma once

class MyUniquePtr final
{
    private:
        int* _pointer;
    
    public:
        explicit MyUniquePtr();
        explicit MyUniquePtr(int* pointer);    
        ~MyUniquePtr();
    
    public:
        MyUniquePtr(MyUniquePtr&& other);
        void operator=(MyUniquePtr&& other);
    
    public:
        int& operator*();

    public:
        MyUniquePtr(const MyUniquePtr& other) = delete;
        void operator=(const MyUniquePtr& other) = delete;
};