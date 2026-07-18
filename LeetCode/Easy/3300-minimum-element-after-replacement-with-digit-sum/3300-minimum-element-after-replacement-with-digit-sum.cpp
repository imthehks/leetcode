class Solution {
public:
    int minElement(vector<int>& nums) {
        int i {0};
        for(int num: nums){
            int rem {0};
            while(num>0){
                rem += num%10;
                num=num/10;  
            }
            nums[i]=rem;  
            i++;      
        }
        return *min_element(nums.begin(),nums.end());
    }
};