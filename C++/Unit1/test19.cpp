Suppose you are given a task to write a program that checks if a given number is an Armstrong number or not. Additionally, if the number is an Armstrong number, the program should print its factors. Write a code for the same using inline functions.



Function specifications:



inline bool isArmstrong(int number) - This calculates whether the given number is an Armstrong number or not.

inline void printFactors(int number) - This prints the factors of the given number.



Note: This is a sample question that can be asked in a TCS recruitment.

Input format :
The input consists of an integer, n.

Output format :
The output displays whether the given number is an Armstrong number or not.

Additionally, if the given number is an Armstrong number, the second line of output displays the factors of the given number separated by space.



Refer to the sample outputs for the formatting specifications.

Code constraints :
0 <= n <= 105

Sample test cases :
Input 1 :
409
Output 1 :
409 is not an Armstrong number.
Input 2 :
153
Output 2 :
153 is an Armstrong number.
1 3 9 17 51 153 


#include <iostream>
#include <cmath>

inline bool isArmstrong(int number) {
    int originalNumber = number;
    int sum = 0;
    int digits = 0;

    while (originalNumber != 0) {
        originalNumber /= 10;
        digits++;
    }

    originalNumber = number;
    while (originalNumber != 0) {
        int digit = originalNumber % 10;
        sum += pow(digit, digits);
        originalNumber /= 10;
    }

    return (sum == number);
}

inline void printFactors(int number) {
    std::cout << std::endl;
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    int number;
    std::cin >> number;

    if (isArmstrong(number)) {
        std::cout << number << " is an Armstrong number.";
        printFactors(number);
    } else {
        std::cout << number << " is not an Armstrong number.";
     
    }
    return 0;
}