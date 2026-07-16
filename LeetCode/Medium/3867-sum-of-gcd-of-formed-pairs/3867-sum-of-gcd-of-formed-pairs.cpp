class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();

        vector<int> prefixGcd(n);
        int maxi = 0;
        for (int i = 0; i < n; i++) {
            maxi = max(maxi, nums[i]);
            prefixGcd[i] = gcd(nums[i], maxi);
        }

        //  sorting prefixGcd in ascending order
        sort(prefixGcd.begin(), prefixGcd.end());

        //  have to make pairs of smallest one with the largest one , until no
        //  element is left

        int left = 0;
        int right = prefixGcd.size() - 1;
        long long totalSum = 0;

        while (left < right) {
            totalSum += gcd(prefixGcd[left], prefixGcd[right]);
            left++;
            // if (n % 2 != 0) {
            //     int mid = (n + 1) / 2;
            //     if (left == mid) {
            //         break;
            //     }
            // }

            right--;
        }
        return totalSum;
    }
};