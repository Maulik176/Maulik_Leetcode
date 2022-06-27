class Solution {
public:
    int ans[20];
    Solution()
    {
        ans[0]=1;
        ans[1]=1; 
        for(int i=2;i<=19;i++)
        {
            int count=0;
            for(int j=1;j<=i;j++)    
            count+=ans[j-1]*ans[i-j];
            ans[i]=count;
        }        
    }
    int numTrees(int n) {
        return ans[n];
        
    }
};