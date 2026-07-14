class Solution {
public:
    int digitFrequencyScore(int n) {
        // n = d * freq(d)
        // 1 <= n <= 10^9
        /*
        unordered_map<int,int> table;

        while(n>0){
            int rem = n%10;
            table[rem]++;
            n= n/10;
        }
        int score {0};
        for(auto p: table){
            // p.first = digit
            // p.second = frequency
            score += p.first*p.second;
        }
        return score;
        */

        int freq[10]={0};
        while(n>0){
            int rem = n%10;
            freq[rem]++;
            n=n/10;
        }
        int score{0};
        for(int i=0; i<=9; i++){
            score += i*freq[i];
        }
        return score;
    }
};