class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int num{x};
        int div{0};
        while (num > 0) {
            int rem = num % 10;
            div += rem;
            num /= 10;
        }
        if (x % div == 0) {
            return div;
        } else {
            return -1;
        }
    }
};