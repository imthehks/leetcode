class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        
        sort(nums.begin(),nums.end());
        int left{0};
        int right{1};
        for(int i=0;i<n && left<n-1 && right<n;i++){
            if(nums[left]==nums[right]){
                return true;
                break;
            }else{
                left++;
                right++;
            }
            
        }
        return false;
        
    
        


    }
};