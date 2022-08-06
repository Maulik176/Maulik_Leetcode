class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        int n = operations.size()-1; 
        while(n>=0){
        if(operations[n]=="++X"||operations[n]=="X++")x++;
        else if(operations[n]=="X--"||operations[n]=="--X")x--;
        n--;
        }
        return x;
    }
};