class Solution {
public:
    string convertToTitle(int columnNumber) {
        string title;
        while(columnNumber)
        {
            title += 'A' + (columnNumber-1)%26;
            columnNumber = (columnNumber - 1) / 26;
        }
        reverse(title.begin(), title.end());
        return title;
    }
};