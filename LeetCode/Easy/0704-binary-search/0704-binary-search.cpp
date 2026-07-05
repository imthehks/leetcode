class Solution {
public:
    int search(vector<int>& nums, int target) {
        // runtime complexity -> O(log n)
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target)
                return mid;
            if (nums[mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return -1;

        /*
        //here the Time Complexity is O(n)

        for(int i=0; i<nums.size(); i++){
            if(target==nums[i]){
                return i;
            }

        }
        return -1;
        */
    }
};