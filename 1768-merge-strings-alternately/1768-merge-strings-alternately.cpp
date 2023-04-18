class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        string ans;
        int i=0;
        while( i<w1.size() && i<w2.size()){
            ans.push_back(w1[i]);
            ans.push_back(w2[i]);
            i++;
        }
        if(i==w1.size()){
            for(int j = i;j<w2.size();j++) ans.push_back(w2[j]);
        }
        else if(i==w2.size()){
            for(int j = i;j<w1.size();j++) ans.push_back(w1[j]);
        }
        return ans;
    }
};