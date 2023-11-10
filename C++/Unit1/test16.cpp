Matt is learning C++ and he got interested in how inline functions work. So he has been practicing questions on that. Help him solve the code for the following question statement: Write an inline function countEvenNumbers() to count the number of even numbers present after squaring the given number.



Example 1



Input:

12



Output:

2



Explanation:

Given number = 12. After squaring (12*12 = 144). The number of even numbers present is 2.



Example 2



Input:

3



Output:

0



Explanation:

Given number = 3. After squaring (3*3 = 9). The number of even numbers present is 0.



Note: This is a sample question that can be asked in a mPhasis recruitment.

Input format :
The input consists of a positive integer N.

Output format :
The output prints the count of the number of even numbers that are present in the square of the given number.

Code constraints :
0 <= N <= 1000

Sample test cases :
Input 1 :
12
Output 1 :
2



#include <iostream>
using namespace std;

inline int countEvenNumbers(int num) {
    long int square = num * num;
    int count = 0;
    
    while (square != 0) {
        int digit = square % 10;
        if (digit % 2 == 0) {
            count++;
        }
        square /= 10;
    }
    
    return count;
}

int main() {
    int number;
    cin >> number;
    
    int evenCount = countEvenNumbers(number);
    
    cout << evenCount;
    return 0;
}
