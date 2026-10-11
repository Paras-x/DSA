class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double p = celsius * 9 / 5 + 32;  // Fahrenheit
        double q = celsius + 273.15;     // Kelvin

        return {q, p};
    }
};