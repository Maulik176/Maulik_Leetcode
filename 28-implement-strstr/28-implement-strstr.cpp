class Solution {
public:
    int strStr(string haystack, string needle) {
        int num1=haystack.size();
        int num2=needle.size();
        if(num2==0)
        {
            return 0;
        }
        for(int i=0;i<num1;i++)
        {
            if(i+num2<=num1 && needle==haystack.substr(i,num2))
            {
            return i;
            }
        }
    return -1;
    }
};