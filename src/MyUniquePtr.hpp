#pragma once

class MyUniquePtr final
{
    private:
        explicit MyUniquePtr();
        explicit MyUniquePtr(void* pointer);    
        ~MyUniquePtr();
    
    private:
        void* _pointer;
    
    public:
        MyUniquePtr(MyUniquePtr&& other);
        // MyUniquePtr operator=(const MyUniquePtr&& other);

    public:
        MyUniquePtr(const MyUniquePtr& other) = delete;
        void operator=(const MyUniquePtr& other) = delete;
};