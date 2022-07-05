class Solution {
public:
    bool isHappy(int n) {
        vector<int> a;
        a.push_back(n);
        while(1){
            int digit = 0,val =0;
            while(n){
                digit = n%10;
                val += (digit*digit);
                n /= 10;
            }
            if(val==1){
                return true;
            }else if(count(a.begin(),a.end(),val)){
                return false;
            }else{
                a.push_back(val);
                n = val;
            }
        }
        return false;
    }
};