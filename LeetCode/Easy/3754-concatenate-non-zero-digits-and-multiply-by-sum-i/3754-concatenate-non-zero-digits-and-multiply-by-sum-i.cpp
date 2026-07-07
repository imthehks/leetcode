class Solution {
public:

    long long sumAndMultiply(int n) {
      vector<int> result;
        int rem {0};
        long long sum{0};
        long long num{0};

        while(n>0){
            rem=n%10;
            n=n/10;
            if(rem!=0){
                sum+=rem;
                result.push_back(rem);
            }
        }
        reverse(result.begin(), result.end());
        for(int i=0; i<result.size(); i++){
            num=num*10+result[i];
        }

        return sum*num;
    }
};