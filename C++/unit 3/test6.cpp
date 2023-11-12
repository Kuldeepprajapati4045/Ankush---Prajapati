Manu is a software developer working on a project that involves handling and displaying data. He is designing a class called "Demo" to represent data objects. The class has two private integer variables: num1 and num2, a constructor, a display function, and a destructor.

Input format :
The input consists of the numbers to be assigned to n1 and n2, respectively, separated by a space.




Output format :
The first line displays the message "Inside Constructor".

The next two lines display n1 and n2 on separate lines.

The last line displays the message "Inside Destructor".

Code constraints :
0 < n1, n2 < 107

Sample test cases :
Input 1 :
4 5
Output 1 :
Inside Constructor
4
5
Inside Destructor



#include <iostream>
using namespace std;

class Demo {
private:
    int num1, num2;

public:
    Demo(int n1, int n2) {
        cout << "Inside Constructor" << endl;
        num1 = n1;
        num2 = n2;
    }

    void display() {
        cout << num1 << endl;
        cout << num2 << endl;
    }

    ~Demo() {
        cout << "Inside Destructor";
    }
};

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    Demo obj(n1, n2);
    obj.display();

    return 0;
}

