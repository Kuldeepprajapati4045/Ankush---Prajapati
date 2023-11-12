Aneesha wants to demonstrate object composition using two classes, Base and InitializerList, to set and display values. She has created a Base class with a parameterized constructor and an InitializerList class that composes a Base object. In the main function, an integer is read, and an InitializerList object is created with the input value, showcasing object composition. The program displays constructor messages as required.



Note: This is a sample question asked in a TCS interview.

Input format :
The input consists of a single integer (N) value entered by the user and the base class constructor.

Output format :
If x is a value, the output displays the following:

Base Class Constructor - indicating the initialization of the Base class.

Value set: x - indicating the value has been set in the Base class.

InitilizerList's Constructor - indicating the initialization.



Refer to the sample output for the exact format.

Code constraints :
1 <= N <= 1000

Sample test cases :
Input 1 :
4
Output 1 :
Base Class Constructor
Value set: 4
InitilizerList's Constructor





#include<iostream>
using namespace std;

class Base {
public:
  Base(int x) : value(x) {
    cout << "Base Class Constructor" << endl;
    cout << "Value set: " << value << endl;
  }

private:
  int value;
};

class InitilizerList {
public:
  InitilizerList(int x) : base(x) {
    cout << "InitilizerList's Constructor" << endl;
  }

private:
  Base base;
};

int main() {
  int value;
  cin >> value;
  InitilizerList mylist(value);
  return 0;
}