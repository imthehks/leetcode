class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // nums array is sorted in ascending order
        int n = nums.size();
        int left{0};
        int right{n - 1};
        int first{-1};
        int last{-1};

        // first occurrence ko pakd liya
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                first = mid;
                right = mid - 1;
            } else if (nums[mid] < target) {
                left = mid + 1;

            } else {
                right = mid - 1;
            }
        }

        // resetting these to start new loop
        left = 0;
        right = n-1;

        // last occurence ko pakd liya
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                last = mid;
                left = mid + 1;
            } else if (nums[mid] < target) {
                left = mid + 1;

            } else {
                right = mid - 1;
            }
        }
        return {first,last};
    }
};