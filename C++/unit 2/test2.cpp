Sandeep is developing a language processing tool for a linguistics research project. The goal is to analyze the consonant usage in a given text. Write a program that takes a paragraph as input and counts the number of consonants in each word of the text. Utilize the pointer-to-pointer concept to analyze the query and count the consonants.



Note: This is a sample question asked in a Capgemini interview.

Input format :
The input consists of a list of words/sentences.

Output format :
The output prints the count of the consonants that are present in the given sentence/sentences.

Code constraints :
1 <= Total number of characters in the sentence(s) <= 1000

Consonants are not case-sensitive.

Sample test cases :
Input 1 :
I love eating pizza and drinking soda on weekends
Output 1 :
24


#include <iostream>
#include <cstring>
using namespace std;

bool isConsonant(char c) {
    c = tolower(c);
    return (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && isalpha(c));
}

int main() {
    char str[1000];
    cin.getline(str, 1000);

    int consonantCount = 0;
    bool inWord = false;

    const char* ptr = str;
    const char** doublePtr = &ptr;

    while (**doublePtr != '\0') {
        if (**doublePtr == ' ' || **doublePtr == '\t' || **doublePtr == '\n') {
            inWord = false;
        }
        else if (!inWord) {
            inWord = true;
            for (const char* temp = *doublePtr; *temp != ' ' && *temp != '\t' && *temp != '\n' && *temp != '\0'; temp++) {
                if (isConsonant(*temp)) {
                    consonantCount++;
                }
            }
        }

        (*doublePtr)++;
    }

    cout << consonantCount;
    return 0;
}