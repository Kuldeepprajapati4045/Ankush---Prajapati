Let's imagine you are working on a program that involves complex numbers. You have been assigned the task of creating a ComplexNumber class to handle complex number operations. The ComplexNumber class has member variables: real and imaginary, representing the real and imaginary parts of a complex number.



To enhance the functionality of the ComplexNumber class, you need to implement a friend function named multiply(). This function takes two ComplexNumber objects as arguments and returns their multiplication result.



Now, let's consider a scenario where you are designing a scientific calculator application. You want to provide complex number multiplication functionality to the calculator's users. Your task is to implement the ComplexNumber class and the multiply() function, allowing users to multiply two complex numbers.



Note: This is a sample question asked in Infosys recruitment.

Input format :
The first line of input consists of the real and imaginary parts of the first complex number separated by spaces.

The second line of input consists of the real and imaginary parts of the second complex number separated by spaces.

Output format :
The output prints the multiplied value of the given complex numbers as shown in the sample outputs.

Code constraints :
Real and imaginary parts of the complex numbers are of double datatype.

Sample test cases :
Input 1 :
2 2
2 2
Output 1 :
0 + 8i
Input 2 :
1.5 9.0
3.6 -0.9
Output 2 :
13.5 + 31.05i



#include <iostream>
using namespace std;
class ComplexNumber {
private:
    double real;
    double imaginary;

public:
    ComplexNumber(double r = 0.0, double i = 0.0) : real(r), imaginary(i) {}

    friend ComplexNumber multiply(const ComplexNumber& num1, const ComplexNumber& num2);

    void display() {
        cout << real << " + " << imaginary << "i" ;
    }
};

ComplexNumber multiply(const ComplexNumber& num1, const ComplexNumber& num2) {
    double resultReal = (num1.real * num2.real) - (num1.imaginary * num2.imaginary);
    double resultImaginary = (num1.real * num2.imaginary) + (num1.imaginary * num2.real);
    return ComplexNumber(resultReal, resultImaginary);
}

int main() {
    double real1, imaginary1, real2, imaginary2;
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;
    ComplexNumber num1(real1, imaginary1);
    ComplexNumber num2(real2, imaginary2);

    ComplexNumber result = multiply(num1, num2);

    result.display();

    return 0;
}
