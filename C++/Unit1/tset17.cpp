
You are tasked with developing a program that takes two integer inputs from the user, calculates their sum, and determines whether the sum is odd or even. To achieve this, you need to display the result in a boolean format using the std::boolalpha manipulator.



Write a program that takes two integers as input, calculates their sum, and determines if the sum is odd or even. Display the result in a boolean format using the std::boolalpha manipulator.

Input format :
The input consists of two space-separated integers: a and b.

Output format :
The output prints true if the sum of a and b is odd.

The output prints false if the sum of a and b is even.

Code constraints :
1 <= a, b <= 109

Sample test cases :
Input 1 :
784 48
Output 1 :
false
Input 2 :
14 97
Output 2 :
true



// You are using GCC
#include <iostream>
#include <iomanip>

int main() {
    int a, b;
    std::cin >> a >> b;
    
    int sum = a + b;
    bool isOdd = sum % 2 != 0;
    
    std::cout << std::boolalpha << isOdd << std::endl;
    
    return 0;
}

