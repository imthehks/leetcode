class Solution {
public:
    int minElement(vector<int>& nums) {
        int rem {0};
        for(int i=0; i<nums.size(); i++){
            int num = nums[i];
            rem = 0;
            while(num>0){
                rem += num%10;
                num=num/10;  
            }
            nums[i]=rem;        
        }
        return *min_element(nums.begin(),nums.end());
    }
};