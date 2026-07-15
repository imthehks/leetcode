class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int sum{0};
        int operations{0};
        for (int i = 0; i < n; i++) {
            sum += nums[i]; // total sum of the given array
        }
        if (sum % k != 0) {
            int rem = sum % k; // rem has some value left
            int i = 0;

            while (rem > 0 && i < n) {

                if (nums[i] - 1 >= 0) {
                    nums[i] = nums[i] - 1;
                    rem--;
                    operations++;
                }
                if(nums[i]==0){
                    i++;
                }
            }
        }
        return operations;
    }
};