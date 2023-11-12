Sandeep wants to calculate the total number of hours he worked on a specific project. As part of the calculation, he has defined a class called Time with two data members: hours and minutes. He wants to display the total time period he worked, which is in hours and minutes, into seconds using a pointer to a data member.



Help him write a program that utilizes the class Time and its pointer to the data member to display the total time he worked in seconds.



Formula: seconds = (hours * 3600) + (minutes * 60)



Note: This is a sample question asked in an IBM interview.

Input format :
The input consists of the hours and minutes as integers separated by a space.

Output format :
The output prints the given hours and minutes converted to seconds.

Code constraints :
0 <= hours < 1000

0 <= minutes < 60

Sample test cases :
Input 1 :
48 00
Output 1 :
172800



#include <iostream>
using namespace std;

class Time {
public:
    int hours;
    int minutes;
};

int main() {
    int hours, minutes;
    cin >> hours;
    cin >> minutes;

    Time t; 
    Time* ptr = &t; 

    ptr->hours = hours;
    ptr->minutes = minutes;

    int seconds = ptr->hours * 3600 + ptr->minutes * 60;

    cout << seconds;
    return 0;
}