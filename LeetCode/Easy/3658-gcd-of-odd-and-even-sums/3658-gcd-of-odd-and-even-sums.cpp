class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        // return n;  // -> first approach

        // 2nd approach
        int sumEven = n * n;
        int sumOdd = n * n + n;
        return gcd(sumEven, sumOdd);
    }
};