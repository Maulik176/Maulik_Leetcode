//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    bool solve(int arr[], int N, int D, int mid){
        int day = 0; 
        int sum=0;
        for(int i=0;i<N;i++){
            sum += arr[i];
            if(sum > mid){
                day++;
                sum = arr[i];
            }
        }
        day++;
        return day<=D;
        
    }
    int leastWeightCapacity(int arr[], int N, int D) {
        // code here
        int low = *max_element(arr, arr+N);
        int ans=0;
        int sum =0;
        int high = accumulate(arr,arr+N,sum);
        while(low<=high){
            int mid = (low + high)/2;
            if(solve(arr,N,D,mid)){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,D;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];
        cin>>D;

        Solution ob;
        cout << ob.leastWeightCapacity(arr,N,D) << endl;
    }
    return 0;
}
// } Driver Code Ends