class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size() ,maxDist=0;
        for(int i=0;i<n;i++){
            for(int j=i+1; j<n; j++){
                if(colors[i] != colors[j]){
                    maxDist = max(maxDist, abs(j - i));
                }
            }
        }
        return maxDist;
    }
};