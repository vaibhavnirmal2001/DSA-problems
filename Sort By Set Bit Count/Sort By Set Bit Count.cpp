class Solution{
    public:
            
    static bool custom(int a ,int b){
            return __builtin_popcount(a) > __builtin_popcount(b);
        }    
    
    void sortBySetBitCount(int arr[], int n)
    {
        // Your code goes here
        stable_sort(arr,arr+n,custom);
    }
};
