class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n= arr.size();
        unordered_map<int,int> m;
        for(auto it : arr){
            m[it]++;
        }
        
        vector<int>freq;
        for(auto it : m){
            freq.push_back(it.second);
        }
        sort(freq.begin(),freq.end());
        int result=0;
        int i=freq.size()-1;
        int ans=0;
        while(result<n/2){
            ans++;
            result+=freq[i];
            i--;
        }
        return ans;     
    }
};