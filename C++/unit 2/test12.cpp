Help Shanon solve the following program: Create a program that tracks personal expenses. Implement a class called "Expense" with attributes like category, amount, and date. Use an array of objects to store expense information. Perform operations such as adding new expenses, categorizing expenses, and calculating total expenses for a specific category.



Note: This kind of question helps in clearing HCL tests.

Input format :
The first line of input contains an integer n, representing the number of expenses.

The next n lines contain the expenses in the format: category, amount, date, separated by a space.

The last line contains the expense that should be calculated (this expense input should be available in the already given input expense).

Output format :
The program will output the following:

Total expenses: The total sum of all expenses.
Category-specific expenses: The total sum of expenses for a specific category.


Refer to the sample output for the formatting specifications.

Code constraints :
max_expenses = 10

1 <= n <= 10

string length <= 50

1.0 <= max expensive amount <= 100.0

Sample test cases :
Input 1 :
4
Food 25.50 2023-01-15
Transportation 12.75 2023-01-16
Shopping 50.00 2023-01-18
Food 15.25 2023-01-20
Food
Output 1 :
Total Expenses: 103.50
Food: 40.75





#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int MAX_EXPENSES = 10; // Maximum number of expenses

class Expense {
public:
    string category;
    double amount;
    string date;
};

int main() {
    Expense expenses[MAX_EXPENSES];
    int numExpenses = 0;

    int numExpensesInput;
    cin >> numExpensesInput;
    cin.ignore(); // Ignore newline character

    for (int i = 0; i < numExpensesInput; i++) {
        string category, date;
        double amount;
        cin >> category >> amount >> date;

        if (numExpenses < MAX_EXPENSES) {
            expenses[numExpenses].category = category;
            expenses[numExpenses].amount = amount;
            expenses[numExpenses].date = date;
            numExpenses++;
        }
    }

    cout << "Total Expenses: " << fixed << setprecision(2);

    double totalExpenses = 0.0;
    for (int i = 0; i < numExpenses; i++) {
        totalExpenses += expenses[i].amount;
    }
    cout << totalExpenses << endl;

    string category;
    cin >> category;
    double totalCategoryExpenses = 0.0;
    for (int i = 0; i < numExpenses; i++) {
        if (expenses[i].category == category) {
            totalCategoryExpenses += expenses[i].amount;
        }
    }
    cout << category << ": " << fixed << setprecision(2) << totalCategoryExpenses;

    return 0;
}
