class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int cnt;
        for (char ch:jewels){
            cnt += count(stones.begin(), stones.end(),ch);
        }
        return cnt;
    }
};