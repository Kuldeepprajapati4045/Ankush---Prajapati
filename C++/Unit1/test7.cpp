Meena is developing a telephone number validation system. Users enter their telephone numbers, and you need to determine the number of digits in the input number to ensure it meets the required format. The program provided can be used as part of the validation process. By counting the digits in the input number, you can quickly identify if the user has entered the correct number of digits expected for a valid telephone number.



Write a program to design a telephone number validation system that checks whether a given input string represents a valid telephone number. The program should utilize a class called TelephoneNumber to store the input number and provide a validation mechanism.



Note: This is a sample question asked in an HCL interview.

Input format :
The input consists of a string of integers, such as a telephone number.

Output format :
If the entered telephone number has exactly 10 digits, output "Valid telephone number!".

If the entered telephone number does not have exactly 10 digits, output "Invalid telephone number!".



Refer to the sample outputs for formatting specifications.

Code constraints :
The length of the input telephone number string will be between 1 and 15 characters.

The input telephone number will consist only of digits (0-9).

Sample test cases :
Input 1 :
1234567890
Output 1 :
Valid telephone number!
Input 2 :
22897466013
Output 2 :
Invalid telephone number






#include <iostream>
#include <string>

class TelephoneNumber {
public:
    std::string number;
};

int main() {
    TelephoneNumber tn;
    std::cin >> tn.number;

    int digitCount = tn.number.length();

    if (digitCount == 10) {
        std::cout << "Valid telephone number!" << std::endl;
    } else {
        std::cout << "Invalid telephone number!" << std::endl;
    }

    return 0;
} 