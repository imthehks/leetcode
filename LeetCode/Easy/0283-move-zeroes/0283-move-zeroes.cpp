class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int read {0};
        int write {0};
        int len = nums.size();

        while(read<len){
            if(nums[read]!=0){
                swap(nums[read],nums[write]);
                write++;
            }
            read++;
            
        }
    }
};