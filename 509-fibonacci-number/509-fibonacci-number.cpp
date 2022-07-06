class Solution {
public:
    int fib(int n) {
        int fofn = 0;
        if(n==0){
            return 0;
        }
        else if(n==1){
            return 1;
        }
        else{
            fofn = fib(n-1) + fib(n-2);
            return fofn;
        }
    }
};