class Solution {
public:
    int minimumCost(vector<int>& nums, int k) {
        const long long MOD = 1000000007LL;
        long long resources{k}; // k -> resources
        long long operations{0};

        for (int x : nums) {
            if (resources < x) {
                long long need = x - resources;
                long long buy = (need + k - 1) / k; // alternative of if else
                operations += buy;
                resources += buy * k; // total updated resources i got
            }
            resources -= x; // left resources after processing current nums[i]
        }

        // Formula hai: operations * (operations + 1) / 2
        // Pehle multiplication pe MOD le rahe hain taki integer overflow na ho
        long long totalCost = (operations % MOD) * ((operations + 1) % MOD) % MOD;

        // Modulo arithmetic me direct /2 is not allowed
        // so 2 ke modular inverse (500000004) se multiply kardiyan
        totalCost = (totalCost * 500000004LL) % MOD;

        return (int)totalCost; 
    }
};