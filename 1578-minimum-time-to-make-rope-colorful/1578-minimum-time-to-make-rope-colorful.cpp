class Solution {
public:
    int minCost(string c, vector<int>& nT) {
        if(nT.size()==1){
            return 0;
        }
        int sum1 = 0;
        int n = nT.size();
        int p1 = 0;
        int p2 = 1;
        while(p2<n){
            if(c[p1]!=c[p2]){
                p1 = p2;
                p2++;
            }else{
                if(nT[p1]>=nT[p2]){
                    sum1 += nT[p2];
                    p2++;
                }else{
                    sum1 += nT[p1];
                    p1 = p2;
                    p2++;
                }
            }
        }
        return sum1;
    }
};