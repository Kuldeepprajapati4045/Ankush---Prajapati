Suppose you have a piggy bank with an initial amount of 50 rupees and you have to add some more money to it.

Create a class named AddAmount with a data member holding the initial amount of Rs. 50.



Now make a constructor for this class without any parameter - no amount will be added to the piggy bank



Create an object for the class and display the final amount in the piggy bank.



Note: This question helps in clearing HCL tests.

Input format :
The input consists of the amount in the piggy bank.

Output format :
The output prints the total amount in Piggie Bank.

Sample test cases :
Input 1 :
400
Output 1 :
50


#include <iostream>
using namespace std;

class AddAmount
{
    int amount;
    public:
    AddAmount()
    {
        amount = 50;
    }

   

    void print_amount()
    {
        cout << amount << endl;
    }
};
int main()
{
    AddAmount a1;
    a1.print_amount();

    return 0;
} 