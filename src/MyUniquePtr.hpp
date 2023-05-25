#pragma once

class MyUniquePtr final
{
    private:
        explicit MyUniquePtr();
        explicit MyUniquePtr(int* pointer);    
        ~MyUniquePtr();
    
    private:
        int* _pointer;
    
    public:
        MyUniquePtr(MyUniquePtr&& other);
        void operator=(MyUniquePtr&& other);
    
    public:
        int& operator*();
        int* operator->();

    public:
        MyUniquePtr(const MyUniquePtr& other) = delete;
        void operator=(const MyUniquePtr& other) = delete;
};