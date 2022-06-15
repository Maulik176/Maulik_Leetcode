class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_w = 0; //the wealth of richest customer
        for(int i=0;i<accounts.size();i++)
        {
            int sum=0;
            for(int j=0;j<accounts[i].size();j++)
            {
                sum += accounts[i][j];
                max_w = max(max_w,sum);
            }
        }  
        return max_w;
    }
};