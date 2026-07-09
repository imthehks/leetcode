class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int carry{1};

        for (int i = n - 1; i >= 0 && carry == 1; i--) {
            if (carry == 1) {
                if (digits[i] + 1 == 10) {
                    digits[i] = 0;
                    carry = 1;
                } else {
                    digits[i]++;
                    carry = 0;
                }
            }
        }
        
        if (carry == 1) {
            digits.insert(digits.begin(), 1);
        }
        
        return digits;
    }
};