Booma is developing a simple calculator application for a math tutoring program. The program requires input validation to ensure that only valid mathematical expressions are accepted. The program should be able to handle arithmetic expressions containing parentheses, addition, subtraction, multiplication, and division operations.



Write a function isValidMathExpression that takes a C-style string (const char* expression) as input and returns a boolean value indicating whether the expression is valid or not.



Function Specifications: bool isValidMathExpression(const char* expression)



Note: The expression can contain the following elements:

Digits: 0-9

Operators: +, -, *, /

Parentheses: (, )



You can assume that the input expression will not exceed a certain length, specified by the bufferSize = 1000 constant in the code.



Note: This is a sample question asked in an HCL interview.

Input format :
The input contains a mathematical expression.

The expression can contain digits (0–9), operators (+, -, *, /), parentheses ((), ), spaces, and tabs.

Output format :
The output displays a message indicating whether the input expression is valid or invalid.



Refer to the sample output for formatting specifications.

Code constraints :
The length of the input expression is limited by the bufferSize constant, which is set to 1000 in the provided code.

The expression can contain a combination of digits, operators, parentheses, spaces, and tabs.

Sample test cases :
Input 1 :
(2 + 3) * 4
Output 1 :
Valid mathematical expression.
Input 2 :
{2 * 3 * 4}
Output 2 :
Invalid mathematical expression.




#include <iostream>
#include <cstring>

using namespace std;

const int bufferSize = 1000;

bool isValidMathExpression(const char* expression) {
    int len = strlen(expression);
    int parenthesesCount = 0;
    bool lastWasOperator = true;
    for (int i = 0; i < len; i++) {
        char c = expression[i];
        if (isdigit(c)) {
            lastWasOperator = false;
        } else if (c == '+' || c == '-' || c == '*' || c == '/') {
            if (lastWasOperator || i == len - 1) {
                return false;
            }
            lastWasOperator = true;
        } else if (c == '(') {
            if (!lastWasOperator) {
                return false;
            }
            parenthesesCount++;
            lastWasOperator = true;
        } else if (c == ')') {
            if (lastWasOperator || parenthesesCount == 0) {
                return false;
            }
            parenthesesCount--;
            lastWasOperator = false;
        } else if (c != ' ' && c != '\t') {
            // invalid character
            return false;
        }
    }
    return parenthesesCount == 0 && !lastWasOperator;
}

int main() {
    char expression[bufferSize];
    cin.getline(expression, bufferSize);
    if (isValidMathExpression(expression)) {
        cout << "Valid mathematical expression." << endl;
    } else {
        cout << "Invalid mathematical expression." << endl;
    }
    return 0;
}
