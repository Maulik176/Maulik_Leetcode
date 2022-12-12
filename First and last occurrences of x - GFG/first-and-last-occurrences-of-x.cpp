//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    int l =0, r=n-1;
    vector<int> ans;
    while(l<=r){

        if(arr[l]!=x){

            l++;

        }

        if(arr[r]!=x){

            r--;

        }

        if(arr[l]==x && arr[r]==x){

            ans.push_back(l);

            ans.push_back(r);

            break;

        }

    }

    if(l>r){

        ans.push_back(-1);

        ans.push_back(-1);

    }

    return ans;
    
    // code here
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends