class Solution {
public:
    long long removeZeros(long long n) {
        long long num{0};
        while (n > 0) {
            int rem = n % 10;
            if (rem != 0) {
                num = num * 10 + rem;
            }
            n = n / 10;
        }
        long long result{0};
        while (num > 0) {
            int rem = num % 10;
            result = result * 10 + rem;
            num = num / 10;
        }
        return result;
    }
};