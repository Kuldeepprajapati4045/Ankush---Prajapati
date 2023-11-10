Shamy is a computer science student studying number systems. She wants to write a program that converts a binary number to its decimal equivalent. The program should prompt the user to enter a binary number, perform the conversion, and display the decimal value.



Note: This is sample question asked in a Capgemini interview.

Input format :
The input consists of a binary number.

Output format :
The output is in the form of a decimal.



Refer to the sample output for formatting specifications.

Code constraints :
o to 11111111

Sample test cases :
Input 1 :
101
Output 1 :
Decimal: 5


// C++ program to convert binary to decimal
#include <iostream>
using namespace std;

// Function to convert binary to decimal
int binaryToDecimal(int n)
{
    int num = n;
    int dec_value = 0;
    
    // Initializing base value to 1, i.e 2^0
    int base = 1;
    
    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
        
        dec_value += last_digit * base;
        
        base = base * 2;
    }
    
    return dec_value;
}

// Driver program to test above function
int main()
{
    int num;
    cin >> num;
    
    cout << "Decimal: " <<binaryToDecimal(num) << endl;
}
