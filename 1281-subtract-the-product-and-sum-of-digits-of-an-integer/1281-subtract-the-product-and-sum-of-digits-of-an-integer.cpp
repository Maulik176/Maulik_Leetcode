class Solution {
public:
    int summ(int n){
        int sum=0;
        while(n>0){
            int digit = n%10;
            n=n/10;
            sum+=digit;
        }
        return sum;
    }
    
    int prodd(int n){
        int prod=1;
        while(n>0){
            int digit = n%10;
            n=n/10;
            prod*=digit;
        }
        return prod;
    }
    int subtractProductAndSum(int n) {
        int a = summ(n);
        int b = prodd(n);
        return b-a;
    }
};