class Solution {
private:
    string solve(int n){
        string s = to_string(n);
        sort(s.begin(), s.end());
        return s;
    }
public:
    bool reorderedPowerOf2(int n) {
        string ans = solve(n);
        for (int i = 0; i < 30; ++i) {
            string powerOfTwo = solve(1 << i);
            if (ans == powerOfTwo)
                return true;
        }
        return false;
    }
};