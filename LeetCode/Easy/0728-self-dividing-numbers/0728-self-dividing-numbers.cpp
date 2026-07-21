class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
        bool mark = true;
        for (int i = left; i <= right; i++) {
           mark = true;
            int num = i;
            while (num > 0) {
                int rem = num % 10;
                if (rem==0 || i % rem != 0) {
                    mark = false;
                }
                num = num / 10;
            }
            if (mark) {
                result.push_back(i);
            }
        }
        return result;
    }
};