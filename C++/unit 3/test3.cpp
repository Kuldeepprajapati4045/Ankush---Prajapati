Akil wants to write a program that creates a Person object and allows the user to enter the name and age of that person. The program should then display the name and age of the created object.



Approach:

Define a Person class with private member variables like name and age.
Implement a default constructor that displays a message indicating it has been called.
Implement a display() member function that prints the name and age of the current object.
Implement the setName() and setAge() member functions to set the name and age of the object.


Note: This is a sample question asked in a HCL interview.

Input format :
The first input consists of the name of the person as a string.

The second input consists of the age of the person as an integer.

Output format :
The output displays the following messages:

"Default constructor is called" (displayed once when the Person object is created)

"Name of current object: [name]" (displays the name entered by the user)

"Age of current object: [age]" (displays the age entered by the user).



Refer to the sample output for the formatting specifications.

Code constraints :
age > 0

Sample test cases :
Input 1 :
Akil
23
Output 1 :
Default constructor is called
Name of current object: Akil
Age of current object: 23
Input 2 :
Jaanu
24
Output 2 :
Default constructor is called
Name of current object: Jaanu
Age of current object: 24






#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person() {
        cout << "Default constructor is called" << endl;
    }

    void display() {
        cout << "Name of current object: " << name << endl;
        cout << "Age of current object: " << age << endl;
    }

    void setName(string newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }
};

int main() {
    Person obj;

    string name;
    int age;

    cin >> name;
    obj.setName(name);

    cin >> age;
    obj.setAge(age);

    obj.display();

    return 0;
}
