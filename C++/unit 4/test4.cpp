You are designing a weather monitoring system for a meteorological department. Create a class called WeatherData that represents temperature data in Celsius.



Overload the unary plus (+) operator to calculate and return the temperature value in Fahrenheit. Overload the unary minus (-) operator to calculate and return the temperature value in Fahrenheit.



Write a program that demonstrates the usage of these unary operators for temperature conversion and accessing the object's address.

Input format :
The input consists of a floating-point number representing the temperature in Celsius.

Output format :
The first line prints the temperature in Fahrenheit using the unary plus operator displayed with the suffix "°F" after the value.

The second line prints the temperature in Fahrenheit using the unary minus operator displayed with the suffix "°F" after the value.

Code constraints :
-100.0 <= Temperature in Celsius <= 100.0

Round off the temperature with one decimal places.

Sample test cases :
Input 1 :
25.5
Output 1 :
77.9°F
-108.2°F
Input 2 :
-25.5
Output 2 :
-13.9°F
57.0°F

#include <iostream>
#include <iomanip>

using namespace std;

class WeatherData {
private:
    double celsius;

public:
    WeatherData(double c = 0.0) : celsius(c) {}

    double getCelsius() const {
        return celsius;
    }

    void setCelsius(double c) {
        celsius = c;
    }

    double getFahrenheit() const {
        return (celsius * 9 / 5) + 32;
    }

    WeatherData operator+() const {
        return *this;
    }

    WeatherData operator-() const {
        return WeatherData(-getFahrenheit());
    }
};

int main() {
    double celsius;
    cin >> celsius;

    WeatherData temp(celsius);


    WeatherData tempFahrenheit = +temp;
    cout << fixed << setprecision(1) << tempFahrenheit.getFahrenheit() << "°F" << endl;

    WeatherData tempNegativeFahrenheit = -temp;
    cout << fixed << setprecision(1) << tempNegativeFahrenheit.getFahrenheit() << "°F";

    return 0;
}