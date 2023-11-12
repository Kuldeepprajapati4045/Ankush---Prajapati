Create a C++ program that manages distances using the Distance class. The program should allow you to input two distances in feet and inches, and it will calculate their sum. The Distance class contains methods for setting distances, adding distances, and displaying distances. The program will create two Distance objects: d1 and d2, where d2 is a copy of d1 using a copy constructor. It then calculates the sum of d1 and d2 and displays the result.



Note: This is a sample question asked in a Wipro interview.

Input format :
The input consists of two floating-point values(feet and inches) separated by a space.

Output format :
The output displays the total distance in the format [distance = X'Y"], where X represents the total feet and Y represents the remaining inches.



Refer to the sample output for the exact format.

Sample test cases :
Input 1 :
10 1
Output 1 :
distance = 20'2" 
Input 2 :
21.55 12.55
Output 2 :
distance = 43'13.1





#include <iostream>
#include <iomanip>
using namespace std;

class Distance {
private:
    float feet;
    float inches;

public:
    Distance() {
        feet = 0;
        inches = 0.0;
    }

    Distance(const Distance& d) {
        feet = d.feet;
        inches = d.inches;
    }

    void setdist(int ft, float in) {
        feet = ft;
        inches = in;
    }

    Distance add(Distance d) {
        Distance t;
        t.inches = inches + d.inches;
        t.feet = feet + d.feet;
        if (t.inches >= 12.0) {
            t.inches -= 12.0;
            t.feet++;
        }
        return t;
    }

    void disp() {
        cout << feet << "\'" << inches << "\" ";
    }
};

int main() {
    float feet, inches;
    cin >> feet >> inches;

    Distance d1;
    d1.setdist(feet, inches);

    Distance d2(d1);  // Create d2 as a copy of d1 using copy constructor

    Distance d3 = d1.add(d2);

    cout << "distance = ";
    d3.disp();

    return 0;
}
