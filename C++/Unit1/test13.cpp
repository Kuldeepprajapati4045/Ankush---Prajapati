A weather forecasting application needs a program that can convert temperature values between Celsius, Fahrenheit, and Kelvin. The program should allow the user to input a temperature in Celsius and display its equivalent values in Fahrenheit and Kelvin.



You are tasked with creating a temperature conversion program using a class called TemperatureConverter. The program should allow users to input a temperature in Celsius and display its equivalent values in Fahrenheit and Kelvin.



Note: Use the non-inline member function.



Note: This is a sample question asked in a Cocubes interview.

Input format :
The input consists of a single line containing a decimal value representing the temperature in Celsius.

Output format :
The first line of the output displays the temperature in Fahrenheit, rounded to two decimal places.

The second line of the output displays the temperature in Kelvin, rounded to two decimal places.



Refer to the sample output for formatting specifications.

Code constraints :
The temperature range is not limited.

The program should handle positive and negative temperature values.

Sample test cases :
Input 1 :
25.5
Output 1 :
Temperature in Fahrenheit: 77.90
Temperature in Kelvin: 298.65
Input 2 :
0
Output 2 :
Temperature in Fahrenheit: 32.00
Temperature in Kelvin: 273.15
Input 3 :
-22
Output 3 :
Temperature in Fahrenheit: -7.60
Temperature in Kelvin: 251.15



#include <iostream>
#include <iomanip>

using namespace std;

class TemperatureConverter {
private:
    double temperature;

public:
    void setTemperature(double temp);
    double getCelsius();
    double getFahrenheit();
    double getKelvin();
};

void TemperatureConverter::setTemperature(double temp) {
    temperature = temp;
}

double TemperatureConverter::getCelsius() {
    return temperature;
}

double TemperatureConverter::getFahrenheit() {
    return (temperature * 9 / 5) + 32;
}

double TemperatureConverter::getKelvin() {
    return temperature + 273.15;
}

int main() {
    TemperatureConverter converter;
    double celsius;

    cin >> celsius;

    converter.setTemperature(celsius);

    std::cout << std::fixed << std::setprecision(2);
    cout << "Temperature in Fahrenheit: " << converter.getFahrenheit() << endl;
    cout << "Temperature in Kelvin: " << converter.getKelvin() << endl;

    return 0;
}