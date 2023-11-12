You are in the process of creating a program to ascertain whether a provided string qualifies as a palindrome. A palindrome, in this context, refers to a string that reads the same both forward and backward. To achieve this, let's implement a function named isPalindrome that utilizes string objects. This function will take a string as input and return True if it is a palindrome and False otherwise.



Furthermore, the main program will interact with the user, prompting them to input a string. It will then invoke the isPalindrome function to determine if the provided string is a palindrome, followed by printing an appropriate message indicating whether the string qualifies as a palindrome or not.



Function specifications: bool isPalindrome(const string& str)



Note: This question is a sample question asked in an Amcat interview.

Input format :
The input consists of a string of alphanumeric characters (lowercase and uppercase characters, digits, and special characters)

Output format :
The output displays a single line containing one of the following messages:



"The string is a palindrome." if the input string is a palindrome.

"The string is not a palindrome." if the input string is not a palindrome.



Refer to the sample output for the formatting specifications.

Code constraints :
String length <= 50

The input string is case-sensitive.

Sample test cases :
Input 1 :
madam
Output 1 :
The string is a palindrome.
Input 2 :
123@321
Output 2 :
The string is a palindrome.
Input 3 :
Highlevel
Output 3 :
The string is not a palindrome.
Input 4 :
Radar
Output 4 :
The string is not a palindrome.



#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string& str) {
    int left = 0;
    int right = str.length() - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main() {
    string inputString;
    cin >> inputString;

    bool isPal = isPalindrome(inputString);

    if (isPal) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
