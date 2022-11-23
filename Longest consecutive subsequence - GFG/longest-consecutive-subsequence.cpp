//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
        if(N==0) return 0;
        sort(arr,arr+N);
        int curr_streak = 1;
        int long_streak = 1;
        for(int i=1; i<N;i++){
            if(arr[i]!=arr[i-1]){
                if(arr[i]==arr[i-1]+1)
                {
                    curr_streak+=1;
                }
                else
                {
                    long_streak=max(curr_streak,long_streak);
                    curr_streak=1;
                }
            }
        }
        return max(curr_streak,long_streak);
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends