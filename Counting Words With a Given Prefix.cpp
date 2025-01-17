class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int matchedWords = 0;
        int p = pref.length();
        for(string word : words){
            if(word.length() >= p){
                if(word.substr(0, p) == pref){
                    matchedWords++;
                }
            }
        }
        return matchedWords;
    }
};
