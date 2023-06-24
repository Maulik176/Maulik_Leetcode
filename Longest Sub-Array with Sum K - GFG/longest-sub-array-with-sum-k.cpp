//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        map<int,int> mpp;
        int maxLen=0;
        long long int prefix_sum=0;
        for(int i=0;i<N;i++){
            prefix_sum += A[i];
            if(prefix_sum == K){
                maxLen = max(maxLen,i+1);
            }
            int rem = prefix_sum - K;
            if(mpp.find(rem) != mpp.end()){
                int len = i - mpp[rem];
                maxLen = max(maxLen,len);
            }
            mpp.insert({prefix_sum, i});
        }
        return maxLen;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends