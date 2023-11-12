Raj wants to build a program that checks the strength of a given password. Implement a function checkPasswordStrength that takes a string representing a password as input and evaluates its strength based on criteria such as length, presence of uppercase letters, lowercase letters, numbers, and special characters. Use string objects to manipulate the password and perform the strength check.



A password is classified as "Weak" if its length is less than 6 characters.
A password is classified as "Medium" if its length is 6-25 characters, and it contains either an uppercase letter or a lowercase letter, along with at least one numeric digit.
A password is classified as "Strong" if its length is 8-25 characters and it contains at least one uppercase letter, one lowercase letter, one numeric digit, and one special character.


Note: This kind of question will be helpful in clearing Capgemini tests.

Input format :
The input consists of a string representing the password that can be of any length and can contain any combination of characters.

Output format :
The program prints the strength of the password as "Weak," "Medium," or "Strong" based on the criteria mentioned in the question.

Code constraints :
The code assumes that the user will input a single line containing the password without any leading or trailing spaces.

1 <= Length of the password <= 25

Sample test cases :
Input 1 :
abcdef
Output 1 :
Weak
Input 2 :
Abcdef1
Output 2 :
Medium
Input 3 :
Abcdef1!
Output 3 :
Strong
Input 4 :
1123
Output 4 :
Weak




#include <iostream>
#include <string>

using namespace std;

enum PasswordStrength {
    WEAK,
    MEDIUM,
    STRONG
};

PasswordStrength checkPasswordStrength(const string& password) {
    bool hasUppercase = false;
    bool hasLowercase = false;
    bool hasNumber = false;
    bool hasSpecialChar = false;

    for (char c : password) {
        if (isupper(c))
            hasUppercase = true;
        else if (islower(c))
            hasLowercase = true;
        else if (isdigit(c))
            hasNumber = true;
        else
            hasSpecialChar = true;
    }

    if (password.length() >= 8 && hasUppercase && hasLowercase && hasNumber && hasSpecialChar && password.length() <= 25 )
        return STRONG;
    else if (password.length() >= 6 && (hasUppercase || hasLowercase) && hasNumber  && password.length() <= 25 )
        return MEDIUM;
    else
        return WEAK;
}

int main() {
    string password;
    getline(cin, password);

    PasswordStrength strength = checkPasswordStrength(password);

    switch (strength) {
        case WEAK:
            cout << "Weak";
            break;
        case MEDIUM:
            cout << "Medium";
            break;
        case STRONG:
            cout << "Strong";
            break;
    }

    return 0;
}