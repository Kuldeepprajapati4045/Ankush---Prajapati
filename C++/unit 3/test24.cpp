As part of Jamie's assignment, he needs to develop a program that manipulates a text file called "sample.txt". The program should read the file's contents, identify any vowel characters, and substitute them with the '#' symbol. Since he is super busy with his other work, he is unable to solve this problem. Help him write a code for the given question.



File Name: sample.txt

Input format :
The input contains a string, which represents a sentence.

Output format :
The output displays the entered and modified contents of the file that replace all vowels with #, separated by a line space.



Refer to the sample output for formatting specifications.

Code constraints :
The length of the sentence should not exceed 1000 characters.

The "sample.txt" file should be created, accessed, and modified successfully.

The program should handle both uppercase and lowercase letters.

Sample test cases :
Input 1 :
Time Is a great teacher but Unfortunately it kills all its pupils.
Output 1 :
Time Is a great teacher but Unfortunately it kills all its pupils.
T#m# #s # gr##t t##ch#r b#t #nf#rt#n#t#ly #t k#lls #ll #ts p#p#ls.



#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream myfile;
    string str;
    myfile.open("sample.txt", ios::out);
    
    getline(cin, str);
    if (!myfile)
    {
        cout << "Cannot create File...";
    }
    else
    {
        myfile << str;
        cout << str;
    }
    myfile.close();

    myfile.open("sample.txt", ios::in | ios::out);

    if (!myfile)
    {
        cout << "\nCannot open File...No such file";
    }
    else
    {
        char ch{};
        while (myfile.get(ch))
        {
            switch (ch)
            {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                myfile.seekg(-1, std::ios::cur);
                myfile << "#";
                myfile.seekg(myfile.tellg(), std::ios::beg);
                break;
            }
        }
    }

    myfile.close();
    char ch;
    myfile.open("sample.txt", ios::in);
    if (myfile)
    {
        cout << "\n";
        while (myfile.get(ch))
        {
            cout << ch;
        }
    }
    return 0;
}