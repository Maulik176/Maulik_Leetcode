class Solution {
public:
    bool canConstruct(string a, string b) {
        int size_a = a.size();
        int size_b = b.size();
        if(size_a>size_b) return false;
        unordered_map<char, int> ransom;
        unordered_map<char, int> magazine;
        for(auto i:a) ransom[i]++;
        for(auto j:b) magazine[j]++;
        for(auto it:ransom){
            if(magazine[it.first] < it.second){
                return false;
            }
        }
        return true;
    }
};