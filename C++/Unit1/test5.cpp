Suma is developing a program to perform arithmetic operations on money values. The program uses a class called Money to represent a monetary amount in terms of rupees and paisa.



Your task is to create the class Money with two attributes:

int rupee
int paisa
Include getters, setters, and constructors.

In the main method, initialize the values for the data members, get two amounts, and print their sum.



Note: This is a sample question asked in an Infosys interview.

Input format :
The input consists of two lines, each containing two integers separated by a space.

The first integer on each line represents the rupee value.

The second integer on each line represents the paisa value.

Output format :
The output displays "Rupees.Paisa" where Rupees represent the total rupee value and Paisa represents the total paisa value.

Sample test cases :
Input 1 :
50 85
42 65
Output 1 :
93.50


#include <iostream>

using namespace std;

class Money {
    public:
    int rupee;
    int paisa;
    
    Money() {
        rupee = 0;
        paisa = 0;
    }
    
    Money(int r, int p) {
        rupee = r;
        paisa = p;
    }
    
    int getRupee() {
        return rupee;
    }
    
    void setRupee(int r) {
        rupee = r;
    }
    
    int getPaise() {
        return paisa;
    }
    
    void setPaise(int p) {
        paisa = p;
    }
    
    Money add(Money m) {
        Money sum;
        sum.rupee = rupee + m.rupee;
        sum.paisa = paisa + m.paisa;
        
        if (sum.paisa >= 100) {
            sum.rupee++;
            sum.paisa -= 100;
        }
        
        return sum;
    }
};

int main() {
    Money m1(50, 85);
    Money m2(42, 65);
    
    Money sum = m1.add(m2);
    
    cout << sum.rupee << "."<<sum.paisa << endl;
    
     return 0;
}
