//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int majorityElement(int a[], int N)
    {
        int count=0;
        int element;
        for(int i=0;i<N;i++){
            if(count ==0){
                count++;
                element = a[i];
            }
            else if(a[i] == element){
                count++;
            }
            else{
                count--;
            }
        }
        int cnt1=0;
        for(int i=0;i<N;i++){
            if(a[i] == element){
                cnt1++;
            }
        }
        if(cnt1 > N/2) return element;
        return -1;
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends