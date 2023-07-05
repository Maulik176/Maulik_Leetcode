//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        map<int,int> mpp;
        int longest = 0;
        int preSum = 0;
        for(int i=0;i<n;i++){
            preSum += A[i];
            if(preSum == 0){
                longest = i+1;
            }
            else{
                if(mpp.find(preSum) != mpp.end()){
                    longest = max(longest, i-mpp[preSum]);
                }
                else{
                    mpp.insert({preSum,i});
                }
            }
        }
        return longest;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends