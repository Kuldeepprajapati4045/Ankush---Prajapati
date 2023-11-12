You are developing a program to analyze electrical circuits. You need to calculate the impedance of two components in a circuit. The impedance is represented by complex numbers. Implement the Arithmetic class to perform addition and subtraction operations on the impedance values. 



Create a class Arithmetic for operator overloading to perform addition and subtraction. Create a binary operator overloading functions to perform arithmetic operations on the given set of complex numbers. 



Note: This is a sample question asked in a TCS question.

Input format :
The first line consists of space-separated float values representing the real and imaginary parts of the first complex number.

The second line consists of space-separated float values representing the real and imaginary parts of the second complex number.

Output format :
The first line of output displays the addition of the complex numbers.

The second line of output display the subtraction of the complex numbers.



Refer to the sample outputs for the formatting specifications.

Code constraints :
-105 < real and imaginary values < 105

Sample test cases :
Input 1 :
4.5 7.8
1.2 3.1
Output 1 :
5.7 + 10.9i
3.3 + 4.7i
Input 2 :
-4 -8.5
5 -5.5
Output 2 :
1 - 14i
-9 - 3i



#include<iostream>
using namespace std; 

class Arithmetic{
    float number1,number2;
public:
    void input(void);
    void output(void);
    Arithmetic operator+(Arithmetic);
    Arithmetic operator-(Arithmetic);
};

void Arithmetic::input(){
    cin >> number1 >> number2;
}

void Arithmetic::output() {
    cout << number1;
    if (number2 >= 0) {
        cout << " + " << number2 << "i";
    } else {
        cout << " - " << -number2 << "i";
    }
}

Arithmetic Arithmetic::operator+(Arithmetic p){
    Arithmetic temp;
    temp.number1 = number1 + p.number1;
    temp.number2 = number2 + p.number2;
    return (temp);
}

Arithmetic Arithmetic::operator-(Arithmetic q){
    Arithmetic temp1;
    temp1.number1 = number1 - q.number1;
    temp1.number2 = number2 - q.number2;
    return (temp1);
}

int main(){
    Arithmetic x,y,z;
    x.input();
    y.input();
    z = x+y;
    z.output();
    z = x-y;
    cout << endl;
    z.output();
    return 0;
}