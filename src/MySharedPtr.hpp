class MySharedPtr final
{
    private:
        int* ptr;
        size_t* ref_count;
    
    public:
        explicit MySharedPtr();
};