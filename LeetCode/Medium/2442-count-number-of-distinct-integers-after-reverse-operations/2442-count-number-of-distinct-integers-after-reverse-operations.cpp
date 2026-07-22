class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int len = nums.size();
        for (int i = 0; i < len; i++) {
            int num = nums[i];
            int rev_digit = 0;
            while (num > 0) {
                int rem = num % 10;
                rev_digit = rev_digit * 10 + rem;
                num /= 10;
            }
            nums.push_back(rev_digit);
        }
        set<int> arr;
        for (int i = 0; i < nums.size(); i++) {
            arr.insert(nums[i]);
        }
        return arr.size();
    }
};