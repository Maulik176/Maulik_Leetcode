class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> freq(26);
        for(auto it: sentence){
            freq[it - 'a']++;   
        }
        for(auto x: freq){
            if(x==0) return false;
        }
        return true;
    }
};