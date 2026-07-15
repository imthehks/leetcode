class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n = nums.size();

        //i can add or subtract 1 from nums array to make it divisible by 3
        int operations {0};
        for(int i=0; i<n; i++){
            if((nums[i]-1)%3==0 || (nums[i]+1)%3==0){
                operations++;
            }
        }
        return operations;
    }
};