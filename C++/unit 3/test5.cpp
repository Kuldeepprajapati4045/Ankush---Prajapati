Hema wants to manage a list of professors at her university. She needs a program that takes input for the number of professors (N) and their details, including their ID, name, and salary. Hema wants to display the details of professors whose salaries are greater than or equal to 20,000.



Write a program to implement this functionality using a class named "Professor" with appropriate member variables and display() member functions and add a constructor with default arguments to the "Professor" class.



Note: This is a sample question asked in a Deloitte interview.

Input format :
The first line consists of the total number of professors (N).

The next N lines consist of Employee ID (integer), name (string), and salary (integer), separated by a space in each line.

Output format :
The output prints the details of the professors whose salaries are greater than or equal to 20000 in separate lines.

Code constraints :
1 <= N <= 100

ID > 0

salary > 0

Sample test cases :
Input 1 :
3
1001 Akil 25000
1002 Elon 30000
1003 Musk 12000
Output 1 :
1001 Akil 25000
1002 Elon 30000
Input 2 :
2
100123 Jibran 100000
100124 Rahman 200000
Output 2 :
100123 Jibran 100000
100124 Rahman 200000




#include <iostream>
#include <string>
using namespace std;

class Professor {
public:
    int id;
    string name;
    int salary;
    
    Professor(int i = 0, string n = "", int s = 0) {
        id = i;
        name = n;
        salary = s;
    }
    
    void display() {
        cout << id << " " << name << " " << salary << endl;
    }
};

int main(void) {
    int i, sal, n;
    string name;
    cin >> n;
    Professor p[n];
    for(int j = 0; j < n; j++) {
        cin >> i >> name >> sal;
        p[j] = Professor(i, name, sal);
    }
    
    for(int j = 0; j < n; j++) {
        if(p[j].salary >= 20000)
            p[j].display();
    }
    
    return 0;
}
