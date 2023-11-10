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


#include<iostream>
using namespace std;

class Money {
    public:
    int rupee;
    int paisa;
    void setRupee(int r) {
        rupee = r;
    }
    void setPaisa(int p) {
        paisa = p;
    }
    int getRupee() {
        return rupee;
    }
    int getPaisa() {
        return paisa;
    }
};
int main() {
        Money m[2];
        int i,t;
        for(i=0;i<2;i++) {
            Money a;
            m[i]=a;
            cin>>t;
            m[i].setRupee(t);
            cin>>t;
            m[i].setPaisa(t);
        }
        int r,p;
        r = m[0].getRupee()+m[1].getRupee();
        p = m[0].getPaisa()+m[1].getPaisa();
        if(p>99) {
            r +=1;
            p = p-100;
        }
        cout<<r<<"."<<p;
}
