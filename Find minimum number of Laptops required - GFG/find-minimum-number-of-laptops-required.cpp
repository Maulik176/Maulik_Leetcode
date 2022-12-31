//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    int minLaptops(int N, int start[], int end[]) { //can think with train problem arrival departure
        sort(start,start+N);
        sort(end,end+N); //greedy
        int min_laptops=0;
        int i=0;
        int j=0; //2 pointer approach
        while(i<N && j<N){
            if(start[i] < end[j]) 
            {
                i++;
                min_laptops++;
            }
            else if(start[i]>=end[j])
            {
                i++;
                j++;
            }
        }
        return min_laptops;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int start[N], end[N];
        for(int i=0; i<N; i++)
            cin>>start[i];
        for(int i=0; i<N; i++)
            cin>>end[i];
            
        Solution ob;
        cout << ob.minLaptops(N, start, end) << endl;
    }
}
// } Driver Code Ends