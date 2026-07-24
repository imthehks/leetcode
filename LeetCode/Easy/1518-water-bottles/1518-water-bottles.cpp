class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int totalDrinks = numBottles;
        while (numBottles >= numExchange) {
            totalDrinks +=numBottles / numExchange;
            numBottles = ((numBottles / numExchange)+ (numBottles % numExchange));
        }
        return totalDrinks;
    }
};