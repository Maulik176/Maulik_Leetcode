class Solution
{
private:
    bool isValid(char ch){
        if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9') ){
            return 1;
        }
        return 0;
    }
    
    char tolower(char ch){
        if( (ch>='a' && ch<='z') ||  (ch>='0' && ch<='9') ){
            return ch;
        }
        else
        {
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }
    
    bool checkpali(string a)
    {
        int s = 0;
        int e = a.length() - 1;
        while(s<=e)
        {
            if(a[s] != a[e])
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
    bool isPalindrome(string str){
        
        string temp = "";
        for(int j=0; j<str.length(); j++){
            if(isValid(str[j])){
                temp.push_back(str[j]);
            }
        }
        
        for(int j=0; j<temp.length();j++){
            temp[j] = tolower(temp[j]);
        }
        
        return checkpali(temp);
        
    }
};