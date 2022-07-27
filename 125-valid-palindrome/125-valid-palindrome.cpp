class Solution
{
private:
    bool valid(char ch){
        if((ch >= 'a' && ch<= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')){
            return 1;
        }
        return 0;
    }
    
    char tolowerCase(char ch)
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
            return ch;
        else
        {
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }
    
    bool checkPalindrome(string a)
    {
        int s = 0;
        int e = a.length() - 1;
        while (s <= e)
        {
            if (a[s] != a[e])
                return 0;
            else
            {
                s++;
                e--;
            }
        }
        return 1;
    }
    
public:
    bool isPalindrome(string str)
    {
        // unnecessary characters
        string temp = "";
        for(int j = 0; j<str.length(); j++){
            if(valid(str[j])){
                temp.push_back(str[j]);
            }
        }
        
        // lowercase
        for(int j = 0; j<temp.length(); j++){
            temp[j] = tolowerCase(temp[j]);
        }
        
        return checkPalindrome(temp);
    }
};