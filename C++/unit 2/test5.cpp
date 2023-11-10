You are tasked with creating a simple banking application that allows users to manage their bank accounts using this pointer. The application should provide the following functionalities:



The application should allow users to create bank accounts by providing an account number and an initial balance.
Users should be able to deposit a specified amount into their bank accounts. The application should update the account balance accordingly.
Users should be able to withdraw a specified amount from their bank accounts, provided they have a sufficient balance. The application should update the account balance accordingly.
Users should be able to view the current balance of their bank accounts.


Write code to implement the above functionalities. The application should ask the user for necessary inputs and display appropriate messages and results based on the actions performed.



Note: This is a sample question asked in a Wipro interview.

Input format :
The input format is as follows:

The first line of input consists of a string representing an account number for account 1.

The second line of input consists of a double value representing the initial balance for account 1.

The third line of input consists of a string representing an account number for account 2.

The fourth line of input consists of a double value representing the initial balance for account 2.

The next line of input consists of a double value representing the amount to deposit into account 1.

The last line of input consists of a double value representing the amount to withdraw from account 2.

Output format :
If the amount entered for withdrawal exceeds the initial balance, then the first line of output will state "Insufficient balance in account [accountnumber]."

The output prints the updated balance after the user's deposit for account 1 and the updated balance after the user's withdrawal for account 2.



Refer to the sample output for the formatting specifications.

Code constraints :
Length of account number <= 20

1 <= amount <= 105

Sample test cases :
Input 1 :
123456
1000
654321
1000
500
500
Output 1 :
Account 123456 has a balance of: 1500
Account 654321 has a balance of: 500
Input 2 :
1011102
1000
2011101
1000
100
1000
Output 2 :
Account 1011102 has a balance of: 1100
Account 2011101 has a balance of: 0
Input 3 :
1023666
1050
6663201
1000
100
1100
Output 3 :
Insufficient balance in account 6663201
Account 1023666 has a balance of: 1150
Account 6663201 has a balance of: 1000





#include <iostream>
using namespace std;

class BankAccount {
    private:
        int accountNumber;
        double balance;
    public:
        BankAccount(int accountNumber, double balance) {
            this->accountNumber = accountNumber;
            this->balance = balance;
        }
        void deposit(double amount) {
            balance += amount;
        }
        bool withdraw(double amount) {
            if (balance >= amount) {
                balance -= amount;
                return true;
            } else {
                return false;
            }
        }
        double getBalance() {
            return balance;
        }
        int getAccountNumber() {
            return accountNumber;
        }
};

int main() {
    int accountNumber1, accountNumber2;
    double initialBalance1, initialBalance2, depositAmount, withdrawAmount;

    // Read input values
    cin >> accountNumber1 >> initialBalance1 >> accountNumber2 >> initialBalance2 >> depositAmount >> withdrawAmount;

    // Create bank accounts
    BankAccount account1(accountNumber1, initialBalance1);
    BankAccount account2(accountNumber2, initialBalance2);

    // Deposit and withdraw amounts
    account1.deposit(depositAmount);
    if (account2.withdraw(withdrawAmount)) {
        // cout << "Account " << account2.getAccountNumber() << " has a balance of: " << account2.getBalance() << endl;
    } else {
        cout << "Insufficient balance in account " << account2.getAccountNumber() << endl;
    }

    // Print updated balances
    cout << "Account " << account1.getAccountNumber() << " has a balance of: " << account1.getBalance() << endl;
    cout << "Account " << account2.getAccountNumber() << " has a balance of: " << account2.getBalance() << endl;

    return 0;
}
