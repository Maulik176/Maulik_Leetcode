class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.endaa());
        int content = 0;
        for(int i=0; i<s.size();i++){
            if(content==g.size()) break;            
            if(s[i] >= g[content]){
                content++;
            }
        }
        return content;
    }
};
