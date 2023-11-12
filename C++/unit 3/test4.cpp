You are required to create a class called Euclids, which computes the Greatest Common Divisor (GCD) using Euclid's algorithm for two positive integers. The Euclids class takes two integer parameters in a setData method and has three methods: setData, computeGCD, and display.



The Euclid algorithm works as follows:



If both arguments are positive, Euclid's algorithm is employed.
If any of the arguments is negative, the algorithm returns 0.
The first integer is divided by the second, and the remainder is stored.
Then, the second is divided by the remainder, and the first remainder is divided by the second, and so on until a remainder of 0 is obtained.
The GCD will be the divisor that produced a remainder of 0.


If either of the input integers is less than or equal to 0, the computeGCD method should return 0 as the GCD.



Note: This kind of question helps in clearing Infosys tests.

Input format :
The input consists of two integer values separated by space.

Output format :
The first line of output prints the input integers separated by spaces.

The second line of output prints the GCD of the two integers.

Code constraints :
0 <= inputs <= 106

Sample test cases :
Input 1 :
1071 462
Output 1 :
1071 462
21
Input 2 :
0 200
Output 2 :
0 200
0
Input 3 :
-5 9
Output 3 :
-5 9
0



#include <iostream>
using namespace std;

class Integer {
public:
    int value;

    Integer(int x) {
        value = x;
    }
};

class Euclids {
private:
    Integer num1;
    Integer num2;

public:
    Euclids(Integer a, Integer b) : num1(a), num2(b) {}

    Integer computeGCD() {
        if (num1.value <= 0 || num2.value <= 0) {
            return Integer(0);
        }

        int remainder = num1.value % num2.value;

        while (remainder != 0) {
            num1.value = num2.value;
            num2.value = remainder;
            remainder = num1.value % num2.value;
        }

        return num2;
    }

    void display() {
        cout << num1.value << " " << num2.value << endl;
    }
};

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    Integer i1(n1);
    Integer i2(n2);

    Euclids e1(i1, i2);

    e1.display();
    cout << e1.computeGCD().value << endl;

    return 0;
}
