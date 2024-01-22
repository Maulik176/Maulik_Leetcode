class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>ans; //store the answer
        int n = nums.size();
        unordered_map<int,int> mpp; //to find the duplicate no
        for(int i=0;i<n;i++){
            mpp[nums[i]]++; //map should have the dup number now
        }
        for(auto it:mpp){
            if(it.second == 2){ //duplicate number
                ans.push_back(it.first); 
                break;
            }
        }

        for(int i=1;i<n+1;i++){
            if(mpp[i] == 0){
                ans.push_back(i);
                break;
            }
        }

        return ans;
    }
};
