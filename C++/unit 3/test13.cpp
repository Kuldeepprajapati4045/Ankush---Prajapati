Ambika wants to write a program that demonstrates file handling operations, such as appending data to an existing file and reading the contents of a file. The program should prompt the user to enter a string, append it to an existing file named "sample.txt", and then display the contents of the file on the console.



File Name: sample.txt



Note: The file name sample.txt contains the text "Time is a Great Teacher BUT Unfortunately It Kills All Its Pupils".



Note: This is a sample question asked in an HCL.

Input format :
The input consists of a string.

Output format :
The output displays provide the following format:



If the file "sample.txt" is successfully opened and the data is appended, the program will display the message "Data appended successfully."

After appending the data, the program will display the contents of the file "sample.txt" on the console, word by word, separated by spaces.



Refer to the sample output for format specifications.

Sample test cases :
Input 1 :
String
Output 1 :
Data appended successfully
Time is a Great Teacher BUT Unfortunately It Kills All Its Pupils String 




 #include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    ofstream of;
    fstream f;
    ofstream fout;
    fout.open("sample.txt");
    char str[300] = "Time is a Great Teacher BUT Unfortunately It Kills All Its Pupils\n";
    fout << str;
    fout.close();
   string s;
   cin>>s;
    of.open("sample.txt", ios::app);
    if (!of)
        cout << "No such file found";
    else {
        of << s;
        cout << "Data appended successfully\n";
        of.close();
        string word;
       
        
        f.open("sample.txt");
        while(!f.eof())
    {
        f >> word;
            cout << word<<" ";
    }
      
        f.close();
    }
    return 0;
}