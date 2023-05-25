#pragma once

class MyUniquePtr final
{
    private:
        explicit MyUniquePtr();
        explicit MyUniquePtr(void* pointer);    
        ~MyUniquePtr();

    private:
        void* _pointer;
};