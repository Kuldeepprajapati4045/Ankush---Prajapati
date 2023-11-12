Create a C++ program for sales calculation that takes a tax rate (TAX_RATE) and an item cost (cost) as inputs. The program should calculate and display the sales tax and total cost in two scenarios: one with a default tax rate of 0.05 and another with a custom tax rate entered by the user. 



The program defines a Sale class with member functions for calculations and a destructor that sets the tax rate to 0.5. However, the custom tax rate provided by the user remains unaffected. The output should clearly present the calculated sales tax and total cost for both scenarios.



Formula:

Sales Tax Amount = Item cost * Tax rate

Total Amount = Item cost + Sales tax amount

Input format :
The first line consists of a tax rate as a double value.

The second line consists of the cost of the item as a double value.

Output format :
The sales tax amount is displayed as a double value.

The total value of the sale is displayed as a double value.

Code constraints :
The sales tax amount and total value will be displayed with precision according to the input values.

Sample test cases :
Input 1 :
0.65
1000
Output 1 :
The amount of sales tax is 50
The total of the sale is 1050
The amount of sales tax with custom TAX RATE is 650
The total of the sale is 1650
The amount of sales tax with default tax rate is 500
The total of the sale is 1500




#include <iostream>
using namespace std;

class Sale {
private:
    double itemCost;
    double taxRate;

public:
    Sale(double cost, double rate = 0.05) {
        itemCost = cost;
        taxRate = rate;
    }

    double getItemCost() const {
        return itemCost;
    }

    double getTaxRate() const {
        return taxRate;
    }

    double getTax() const {
        return (itemCost * taxRate);
    }

    double getTotal() const {
        return (itemCost + getTax());
    }

    ~Sale() {
        taxRate = 0.5;
    }
};

int main() {
    double TAX_RATE;
    cin >> TAX_RATE;
    double cost;
    cin >> cost;
    Sale itemSale(cost);

    cout << "The amount of sales tax is " << itemSale.getTax() << endl;
    cout << "The total of the sale is ";
    cout << itemSale.getTotal() << endl;

    Sale itemSale2(cost, TAX_RATE);

    cout << "The amount of sales tax with custom TAX RATE is " << itemSale2.getTax() << endl;
    cout << "The total of the sale is ";
    cout << itemSale2.getTotal() << endl;

    itemSale2.~Sale();
    cout << "The amount of sales tax with default tax rate is " << itemSale2.getTax() << endl;
    cout << "The total of the sale is ";
    cout << itemSale2.getTotal() << endl;

    return 0;
}