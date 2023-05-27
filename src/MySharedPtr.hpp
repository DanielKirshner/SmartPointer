class MySharedPtr
{
    private:
        int* ptr;
        size_t* ref_count;
    
    public:
        MySharedPtr();
};