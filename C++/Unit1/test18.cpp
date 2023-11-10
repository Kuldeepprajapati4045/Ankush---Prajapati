You are tasked with writing a program that helps analyze the distribution of digits in a given integer. Your program should count how many times each digit appears in the number and display the counts in an organized manner using the setw manipulator for formatting.



Note: Make the width length as 2.

Input format :
The input consists of an integer.

Output format :
The output prints how many times each digit appears in the given number.



Refer to the sample outputs for the formatting specifications.

Sample test cases :
Input 1 :
12312
Output 1 :
Digit 1:  2 times
Digit 2:  2 times
Digit 3:  1 times
Input 2 :
123
Output 2 :
Digit 1:  1 times
Digit 2:  1 times
Digit 3:  1 times





// You are using GCC
#include <iostream>
#include <iomanip>
#include <map>

int main() {
    int number;
    std::map<int, int> digitCount;
    std::cout << " ";
    std::cin >> number;
    while (number > 0) {
        int digit = number % 10;
        digitCount[digit]++;
        number /= 10;
    }
    for (const auto& entry : digitCount) {
        std::cout << "Digit " << entry.first << ": " << std::setw(2) << entry.second << " times" << std::endl;
    }
    return 0;
}
