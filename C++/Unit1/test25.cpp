Write a program that takes three integer values as input from the user, then performs the following operations:



Calls a function named shift that takes three integer references as parameters and shifts their values one position to the left, i.e., the value of c becomes the value of b, the value of b becomes the value of a, and the value of a becomes the original value of c.



Calls a function named getLargest that takes three integer references as parameters and returns a reference to the largest value among them.



Prompts the user to input a new value for the largest value among the three integers, and modifies it using the reference returned by getLargest.Prints out the updated values of x, y, and z, as well as the new value of the largest value among them.



Function Specifications:

shift(int& a, int& b, int& c)

int& getLargest(int& a, int& b, int& c)



Note: This is a sample question asked in TCS recruitment.

Input format :
The first line consists of three integers x, y, and z separated by space representing the initial values of the variables.

The last line consists of an integer that represents the value to be assigned to the largest variable.

Output format :
The first line prints the original values of the variables before the shift operation.

The second line prints the values of the variables after the shift operation.

The third line prompts the values of the variables after the largest variable has been modified.

The fourth line prints the largest value among the three variables.

Sample test cases :
Input 1 :
1 2 3
10
Output 1 :
Before Shift: x: 1 y: 2 z: 3
After Shift: x: 3 y: 1 z: 2
After modification: x: 10 y: 1 z: 2
The largest value among x, y, and z is: 10
Input 2 :
5 3 7
8
Output 2 :
Before Shift: x: 5 y: 3 z: 7
After Shift: x: 7 y: 5 z: 3
After modification: x: 8 y: 5 z: 3
The largest value among x, y, and z is: 8





#include <iostream>
using namespace std;
void shift(int& a, int& b, int& c) {
    int temp = c;
    c = b;
    b = a;
    a = temp;
}

int& getLargest(int& a, int& b, int& c) {
    if (a > b && a > c) {
        return a;
    } else if (b > c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    int x, y, z;
    cin >> x >> y >> z;

    cout << "Before Shift: x: " << x << " y: " << y << " z: " << z << endl;
    shift(x, y, z);
    cout << "After Shift: x: " << x << " y: " << y << " z: " << z << endl;

    int& largest = getLargest(x, y, z);
    cin >> largest;

    cout << "After modification: x: " << x << " y: " << y << " z: " << z << endl;
    cout << "The largest value among x, y, and z is: " << largest << endl;

    return 0;
}
