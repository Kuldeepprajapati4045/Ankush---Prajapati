Smith wants to buy a second-hand car so he wants to check for a few parameters before buying. So you have to design a class Car with private attributes brand and fuelConsumption. Implement a friend function calculateFuelCost(const Car&, double, double) that takes a car object, the distance traveled, and the fuel price per liter as parameters and calculates and returns the total fuel cost. 



Write a program to input the brand, fuel consumption, distance traveled, and fuel price, create an object of the Car class, calculate the fuel cost using the calculateFuelCost function, and display the result.



Note: This is a sample question asked in TCS recruitment.

Input format :
The first line consists of the car brand as a string.

The second line consists of the fuel consumption in liters per 100 km as a floating-point number.

The third line consists of the distance traveled in kilometers as a floating-point number.

The fourth line consists of the fuel price per liter as a floating-point number.

Output format :
The output prints the total fuel cost as a floating-point number, rounded off to two decimal places.

Sample test cases :
Input 1 :
Toyota
8.5
200.75
4.25
Output 1 :
72.52




#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Car {
private:
    string brand;
    double fuelConsumption;

public:
    Car(const string& b, double fc) : brand(b), fuelConsumption(fc) {}

    friend double calculateFuelCost(const Car& car, double distance, double fuelPrice);
};

double calculateFuelCost(const Car& car, double distance, double fuelPrice) {
    double fuelConsumed = (car.fuelConsumption / 100.0) * distance;
    double totalFuelCost = fuelConsumed * fuelPrice;
    return totalFuelCost;
}

int main() {
    string brand;
    double fuelConsumption, distance, fuelPrice;
    cin >> brand;
    cin >> fuelConsumption;
    cin >> distance;
    cin >> fuelPrice;

    Car car(brand, fuelConsumption);
    double fuelCost = calculateFuelCost(car, distance, fuelPrice);

    cout << fixed << setprecision(2) << fuelCost;
    return 0;
}