class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int totalDrinks = numBottles;
        int emptyDrinks = numBottles;
        while (emptyDrinks >= numExchange) {
            int quo = emptyDrinks / numExchange;
            int rem = emptyDrinks % numExchange;
            totalDrinks += quo;
            emptyDrinks = quo + rem;
        }
        return totalDrinks;
    }
};