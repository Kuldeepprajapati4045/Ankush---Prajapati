
Imagine you are developing a payroll management system for a company that needs to keep track of employee salary information. As part of this system, you are tasked with creating a class named "Employee" to represent each employee's salary. The class should have the following specifications:



A private static data member named "count" keeps track of the total number of employee objects created. It should be initialized to 0.
A public static member function named "getCount" that allows the company to retrieve the total count of employee objects.
A public member function named "setSalary" takes in the value of "salary" as a parameter and sets the corresponding data member for an employee object. This function allows the company to set the salary for an employee.
A public member function named "getSalary" retrieves and returns the value of "salary" for an employee object. This function allows the company to retrieve an employee's salary for various calculations.
A private data member named "salary" stores the integer value of an employee's salary. This data member is specific to each employee object.


Based on the given specifications, your task is to implement the "Employee" class that meets the requirements mentioned above. This class will help the company manage employee salary information efficiently within the payroll management system.



Note: This is a sample question asked in an HCL interview.

Input format :
The first line of the input consists of an integer denoting the number of employees (n).

The next n lines consist of the salaries of n employees stored as integers.

Output format :
The output displays the total number of employees, followed by their salary on each line.



Refer to the sample output for formatting specifications.

Sample test cases :
Input 1 :
3
100
200
300
Output 1 :
Total number of employees: 3
Salary for employee 1: 100
Salary for employee 2: 200
Salary for employee 3: 300



#include <iostream>
using namespace std;

class Employee {
    private:
        static int count;
    
        int salary;
    public:
        static int getCount() {
            return count;
        }
        void setSalary(int s) {
            salary = s;
        }
        float getSalary() {
            return salary;
        }
        Employee() {
            count++;
        }
};

int Employee::count = 0;

int main() {
    int n;
    cin >> n;
    Employee *emp = new Employee[n];
    for (int i = 0; i < n; i++) {
        int s;
        // cout << "Enter the salary for employee " << i+1 << ": ";
        cin >> s;
        emp[i].setSalary(s);
    }
    cout << "Total number of employees: " << Employee::getCount() << endl;
    for (int i = 0; i < n; i++) {
        cout << "Salary for employee " << i+1 << ": " << emp[i].getSalary() << endl;
    }
    
        delete[] emp;
    return 0;
}