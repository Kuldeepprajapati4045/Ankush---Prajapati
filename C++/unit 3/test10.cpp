Gokul wants to create a class Numbers with three parameters, num1, num2, and num3, which are received as inputs from the user and stored as member variables as integer data types. The class should not allow the user to create a numbers object using a default constructor. Use a parameterized constructor to create the given class.



Help him to create three methods:

-print to print the inputs received

-printSum to print the sum of the given numbers

-printGreatest: to print the greatest of the given numbers.



Note: This kind of question helps in clearing Capgemini tests.

Input format :
The input consists of three space-separated integers: num1, num2, and num3.

Output format :
The first line of output prints the given numbers separated by a space.

The second line of output prints the sum of the given numbers.

The third line of output prints the greatest of three numbers.

Code constraints :
0 <= num1, num2, num3 <= 5000

Sample test cases :
Input 1 :
10 20 30
Output 1 :
10 20 30
60
30
Input 2 :
45 19 88 
Output 2 :
45 19 88
152
88


#include <iostream>
#include <iomanip>
using namespace std;

class Numbers {
public:
  Numbers(int num1, int num2, int num3) : m_num1(num1), m_num2(num2), m_num3(num3) {
  }
  void print() {
    cout << m_num1 << " " << m_num2 << " " << m_num3 << endl;
  }
  void printSum() {
    int sum = m_num1 + m_num2 + m_num3;
    cout << sum << endl;
  }
  void printGreatest() {
    int greatest = m_num1;
    if (m_num2 > greatest) {
      greatest = m_num2;
    }
    if (m_num3 > greatest) {
      greatest = m_num3;
    }
    cout << greatest;
  }
private:
  int m_num1;
  int m_num2;
  int m_num3;
};

int main() {
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;
    Numbers n1(num1, num2, num3);
    n1.print();
    n1.printSum();
    n1.printGreatest();

    return 0;
}