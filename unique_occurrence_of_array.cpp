class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mpp;
        int n = arr.size();
        for(int i=0;i<n;i++){
            mpp[arr[i]]++;
        }
        vector<int> ans;
        for(auto it:mpp){
            ans.push_back(it.second);
        }
        sort(ans.begin(), ans.end());
        for(int i=1;i<ans.size();i++){
            if(ans[i] == ans[i-1]){
                return false;
            }
        }
        return true;

    }
};
