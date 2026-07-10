class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int len = flowerbed.size();

        for (int i = 0; i < len && n>0; i++) {
            bool leftEmpty = (i == 0) || (flowerbed[i - 1] == 0);
            bool rightEmpty = (i == len - 1) || (flowerbed[i + 1] == 0);
            if (flowerbed[i] == 0 && leftEmpty && rightEmpty) {
                flowerbed[i] = 1;
                n--;
            }
        }
        if (n == 0)
            return true;
        return false;
    }
};