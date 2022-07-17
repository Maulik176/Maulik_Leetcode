class Solution {
public:
    int kInversePairs(int n, int k) {
        int mod = 1000000007;
        int dp[1001][1001] = { 1 }; //akha dp table ne 1 thi initialize karyu
        
        for(int i=1;i<=n;i++) //grabboing the first digit in array 
            for(int K=0; K<=k;K++) //n is always > k and aa k ne iterate karva mate
                for(int j=0; j<= min(K,i-1);j++) //bottom up
                    dp[i][K] = (dp[i][K] + dp[i-1][K-j])%mod; // pairs ne collect karva mate
        return dp[n][k];
    }
};