//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
        	long long arr3[n+m];
            int left=0;
        	int right=0;
        	int index=0;
        	//putting everything in arr3 in a sorted order
        	while(left<n && right<m){
        		if(arr1[left] <= arr2[right]){
        			arr3[index] = arr1[left];
        			left++, index++;
        		}
        		else{
        			arr3[index] = arr2[right];
        			right++, index++;
        		}
        	}
        	//look for exhausted elements
        	while(left < n){
        		arr3[index++] = arr1[left++];
        	}
        	while(right < m){
        		arr3[index++] = arr2[right++];
        	}
        
        	//put everything back 
        	for(int i=0;i<m+n;i++){
        		if(i<n) arr1[i] = arr3[i];
        		else arr2[i-n] = arr3[i];
        	}
        } 
};

//{ Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 

// } Driver Code Ends