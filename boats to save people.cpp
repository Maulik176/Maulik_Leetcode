class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        sort(people.begin(), people.end());
        int boats = 0;
        int left = 0;
        int right = n-1;
        while(left<=right){
            int sum = people[left] + people[right];
            if(sum<=limit){
                boats++;
                left++;
                right--;
            }
            else{
                boats++;
                right--;
            }
        }
        return boats;
    }
};
