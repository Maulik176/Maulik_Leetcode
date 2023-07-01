//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int findK(vector<vector<int>> &matrix, int N, int M, int K)
    {
        int left = 0, right = M - 1, top = 0, bottom = N - 1;
    int dir = 0; // 0: left to right, 1: top to bottom, 2: right to left, 3: bottom to top
    
    while (left <= right && top <= bottom) {
        if (dir == 0) {
            for (int i = left; i <= right; i++) {
                K--;
                if (K == 0)
                    return matrix[top][i];
            }
            top++;
            dir = 1;
        } else if (dir == 1) {
            for (int i = top; i <= bottom; i++) {
                K--;
                if (K == 0)
                    return matrix[i][right];
            }
            right--;
            dir = 2;
        } else if (dir == 2) {
            for (int i = right; i >= left; i--) {
                K--;
                if (K == 0)
                    return matrix[bottom][i];
            }
            bottom--;
            dir = 3;
        } else if (dir == 3) {
            for (int i = bottom; i >= top; i--) {
                K--;
                if (K == 0)
                    return matrix[i][left];
            }
            left++;
            dir = 0;
        }
    }
    }

};

//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        vector<vector<int>> a(n, vector<int>(m, 0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }

        Solution obj;

        cout<< obj.findK(a, n, m, k) << "\n";
        
       
    }
}
// } Driver Code Ends