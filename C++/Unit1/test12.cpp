A retail shop wants to keep track of its total sales for a specific period. They need a program that allows them to input the sales amount for each transaction and calculate the total sales.



Your task is to write a program to calculate and display the total sales amount of a shop. The shop sells various items, and the sales amount of each item is provided as input. Your program should maintain a record of the total sales across all instances of the class using static data members and static member functions.



Note: This is a sample question asked in a Deloitte interview.

Input format :
The first line of input contains an integer, n, representing the number of sales instances.

The next n lines contain the sales amount made by each instance. Each line contains a positive floating-point value.

Output format :
The output consists of a single line displaying the total sales amount of the shop.



Refer to the sample output for the formatting specifications.

Code constraints :
The number of sales instances should not exceed 100.

Each sales amount should be a positive floating-point value.

Sample test cases :
Input 1 :
3
100.5
50.75
75.25
Output 1 :
Total Sales: 226.50
Input 2 :
4
25.5
30.75
15.25
20.5
Output 2 :
Total Sales: 92.00



#include <iostream>
#include <iomanip>

class Shop {
private:
    static double totalSales;  

public:
    static void addSales(double salesAmount) {
        totalSales += salesAmount;  
    }

    static double getTotalSales() {
        return totalSales;
    }
};

double Shop::totalSales = 0.0; 

int main() {
    int n;
    double salesAmount;

   
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        
        std::cin >> salesAmount;

        Shop::addSales(salesAmount);
    }

    std::cout << std::fixed << std::setprecision(2); 
    std::cout << "Total Sales: " << Shop::getTotalSales() << std::endl;

    return 0;
}
