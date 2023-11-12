Saakshi wants to create a C++ program that takes two integer inputs 'a' and 'b' from the user. The program then writes all even numbers from 'a' to 'b' (inclusive) to a file named "even.txt," each on a separate line. Finally, it reads and displays the contents of "even.txt" to the console.

Input format :
The input consists of two space-separated integers: a and b.

Output format :
The output prints all the even numbers present from a to b(inclusive) in separate lines.

Code constraints :
-105 <= a < b <= 105

Sample test cases :
Input 1 :
-8 9
Output 1 :
-8
-6
-4
-2
0
2
4
6
8
Input 2 :
0 16
Output 2 :
0
2
4
6
8
10
12
14
16



#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
 
    ofstream file("even.txt");
    if (file.is_open()) {
        for (int i = a; i <= b; i++) {
            if (i % 2 == 0) {
                file << i << endl;
            }
        }
        file.close();
    } 
    
    ifstream readFile("even.txt");
    if (readFile.is_open()) {
        string line;
        while (getline(readFile, line)) {
            cout << line << endl;
        }
        readFile.close();
    } 
    return 0;
}