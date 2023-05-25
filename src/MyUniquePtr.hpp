#pragma once

class MyUniquePtr
{
    private:
        explicit MyUniquePtr();
        explicit MyUniquePtr(void* pointer);    
        ~MyUniquePtr();

    private:
        void* _pointer;
};