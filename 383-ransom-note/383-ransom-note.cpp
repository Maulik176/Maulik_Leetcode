class Solution {
public:
    bool canConstruct(string a, string b) {
        int size_a = a.size();
        int size_b = b.size();
        // if(a>b) return false;
        unordered_map<char, int> ransom;
        unordered_map<char, int> magazine;
        for(auto it:a) ransom[it]++;
        for(auto it:b) magazine[it]++;
        for(auto it:ransom){
            if(magazine[it.first] < it.second){
                return false;
            }
        }
        return true;
    }
};