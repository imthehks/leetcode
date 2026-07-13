class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        // Kelvin = Celsius + 273.15
        // Fahrenheit = Celsius * 1.80 + 32.00
        
        double kelvin = (celsius + 273.15);
        double farenheit = (celsius * 1.80 + 32.00);

        // vector<double> ans = {(double)kelvin, (double)farenheit};
        vector<double> ans = {kelvin,farenheit};
        return ans;
    }
};