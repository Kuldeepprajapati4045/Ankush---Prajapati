Mano was tasked with creating a program to manage a shopping cart. The program should allow the user to enter details of multiple products, including the product name, price, and quantity. After entering the product details, the program should display the total price for each product and the overall shopping cart details using a pointer to object.



Note: This is a sample question asked in a Deloitte interview.

Input format :
The first line of input contains an integer, maxProducts, representing the maximum number of products that can be added to the shopping cart.

For each product, the following information should be provided:

The first line of input consists of a string representing the name of the product (a string without spaces).

The second line of input consists of a double value, representing the price of the product.

The third line of input consists of an integer representing the quantity of the product.

Output format :
The program should display the shopping cart details, including the product name and the total price for each product.

Each product's details should be displayed on a separate line.

The total price should be displayed with two decimal places.



Refer to the sample output for formatting specifications.

Code constraints :
The maximum number of products, maxProducts, should not exceed 100.

The product name will be a string without any leading or trailing spaces.

The price will be a non-negative double value.

The quantity will be a non-negative integer value.

Sample test cases :
Input 1 :
3
Apple 
0.99 
5
Orange 
1.50 
3
Banana 
0.50 
10
Output 1 :
Shopping Cart details:
Product Name: Apple 
Total Price: 4.95
Product Name: Orange 
Total Price: 4.50
Product Name: Banana 
Total Price: 5.00
Input 2 :
4
Grapes
0.75
3
Strawberry
1.80
5
Kiwi
2.30
7
Blueberry
1.50
4
Output 2 :
Shopping Cart details:
Product Name: Grapes
Total Price: 2.25
Product Name: Strawberry
Total Price: 9.00
Product Name: Kiwi
Total Price: 16.10
Product Name: Blueberry
Total Price: 6.00




#include <iostream>
#include <iomanip>
#include <string>

const int MAX_PRODUCTS = 100;

class Product {
private:
    std::string name;
    double price;
    int quantity;

public:
    void setProductInfo(const std::string& n, double p, int q) {
        name = n;
        price = p;
        quantity = q;
    }

    double getTotalPrice() const {
        return price * quantity;
    }

    void displayProduct() const {
        std::cout << "Product Name: " << name << std::endl;
        std::cout << "Total Price: " << std::fixed << std::setprecision(2) << getTotalPrice() << std::endl;
    }
};

int main() {
    int maxProducts;

    std::cin >> maxProducts;

    Product products[MAX_PRODUCTS];
    Product* productPtrs[MAX_PRODUCTS];

    for (int i = 0; i < maxProducts; i++) {
        std::string name;
        double price;
        int quantity;

        std::cin.ignore();
        getline(std::cin, name);
        std::cin >> price;
        std::cin >> quantity;

        products[i].setProductInfo(name, price, quantity);
        productPtrs[i] = &products[i];
    }

    std::cout << "Shopping Cart details:\n";
    for (int i = 0; i < maxProducts; i++) {
        productPtrs[i]->displayProduct();
    }

    return 0;
}