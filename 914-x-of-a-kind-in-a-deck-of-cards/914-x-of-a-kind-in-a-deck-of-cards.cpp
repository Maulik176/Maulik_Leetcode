class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int> partition;
        for(auto it: deck){
            partition[it]++;
        }
        int x_kind=0;
        for(auto it: partition){
            x_kind =__gcd(x_kind,it.second);
        }
        return x_kind>=2;
    }
};