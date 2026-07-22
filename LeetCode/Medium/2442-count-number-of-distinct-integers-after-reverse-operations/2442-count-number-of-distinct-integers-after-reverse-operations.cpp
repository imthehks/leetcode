class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        set<int> arr;

        for (int num : nums) {
            arr.insert(num);
            int rev_digit = 0;
            while (num > 0) {
                int rem = num % 10;
                rev_digit = rev_digit * 10 + rem;
                num /= 10;
            }
            arr.insert(rev_digit);
        }
        return arr.size();
    }
};