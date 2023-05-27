#pragma once

class MyUniquePtr final
{
    private: int* _pointer;
    
    public: explicit MyUniquePtr();
    public: explicit MyUniquePtr(int* pointer);    
    public: MyUniquePtr(MyUniquePtr&& other);
    
    public: void operator=(MyUniquePtr&& other);
    public: int& operator*() const;

    public: MyUniquePtr(const MyUniquePtr& other) = delete;
    public: void operator=(const MyUniquePtr& other) = delete;
    
    public: ~MyUniquePtr();
};