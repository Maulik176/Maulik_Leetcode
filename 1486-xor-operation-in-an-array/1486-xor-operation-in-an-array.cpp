class Solution {
public:
    int xorOperation(int n, int start) {
        int ans[n];
        int res=0;
        for(int i=0; i<n;i++){
            ans[i] = start+2*i;
        }
        
        for(int i=0; i<n;i++){
            res = res ^ ans[i];
        }
        return res;
    }
};