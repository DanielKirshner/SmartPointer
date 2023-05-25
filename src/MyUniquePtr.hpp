#pragma once

class MyUniquePtr final
{
    private:
        explicit MyUniquePtr();
        explicit MyUniquePtr(void* pointer);    
        ~MyUniquePtr();
    
    public:
        MyUniquePtr(const MyUniquePtr& other) = delete;
        MyUniquePtr operator=(const MyUniquePtr& other) = delete;


    private:
        void* _pointer;
};