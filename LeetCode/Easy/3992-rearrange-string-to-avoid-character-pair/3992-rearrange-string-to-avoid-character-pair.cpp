class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        string t = "";
        int countX{0};
        int countY{0};
        for (char p : s) {
            if (p == x) {
                countX++;
            } else if (p == y) {
                countY++;
            } else {
                t += p;
            }
        }
        while (countY--) {
            t += y;
        }
        while (countX--) {
            t += x;
        }
        return t;
    }
};