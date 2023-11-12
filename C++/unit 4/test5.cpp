Help Aashiq solve the following problem: Create a program that performs string operations using a custom class called MyString.



The program should read two strings and a number from the user, and then perform concatenation and repetition operations on those strings using overloaded operators. Finally, it should display the results.



Note: This question helps in clearing HCL tests.

Input format :
The input consists of two strings: str1 and str2 in separate lines.

The last line of the input consists of the number of repetitions, n.

Output format :
The output prints the following in each line:

a) The concatenated string of first and second.

b) The first string that is repeated n times.

c) The second string that is repeated n times.

Code constraints :
The maximum length of each input string is 100 characters.

1 <= n <= 10

Sample test cases :
Input 1 :
Hello
helllooo
5
Output 1 :
Hellohelllooo
HelloHelloHelloHelloHello
helllooohelllooohelllooohelllooohelllooo
Input 2 :
Today
Today
5
Output 2 :
TodayToday
TodayTodayTodayTodayToday
TodayTodayTodayTodayToday



#include <iostream>
#include <string>

class MyString {
private:
    std::string str;

public:
    MyString(const std::string& s) : str(s) {}

    MyString operator+(const MyString& other) {
        return MyString(str + other.str);
    }

    void operator*(int n) {
        for (int i = 0; i < n; ++i) {
            std::cout << str;
        }
    }

    const std::string& getString() const {
        return str;
    }
};

int main() {
    std::string first, second;
    int repetitions;

    std::cin >> first;
    std::cin >> second;
    std::cin >> repetitions;

    MyString firstString(first);
    MyString secondString(second);

    MyString result = firstString + secondString;
    std::cout << result.getString() << std::endl;

    firstString * repetitions;
    std::cout << std::endl;
    secondString * repetitions;

    return 0;
}
