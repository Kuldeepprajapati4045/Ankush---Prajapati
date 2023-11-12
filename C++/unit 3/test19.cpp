David has a text file named "numbers.txt" that contains a list of integers with a maximum limit of 100 integers. He wants to write a program to read this file, count the number of even and odd integers, and display the counts. Help him write the code.

Input format :
The first line consists of an integer n, representing the total number of integers.

The second line consists of n space-separated integers.

Output format :
The output prints the count of even and odd integers on separate lines in the following format: "Even: " and "Odd: ".

If n exceeds 100, the output prints "Exceeding limit!".

Code constraints :
1 <= n <= 100

-109 <= integers <= 109

Sample test cases :
Input 1 :
5
-21 -10 -11 -8 -92
Output 1 :
Even: 3
Odd: 2
Input 2 :
3
181 -823 -5107
Output 2 :
Even: 0
Odd: 3
Input 3 :
6
24 -70 -54 -80 4 90
Output 3 :
Even: 6
Odd: 0
Input 4 :
101
-135771779 601186992 184123462 480010267 -226742138 -716932622 751669017 583520178 -523445486 921952276 323728547 780764256 -380278731 681440516 -183717159 -83374776 141778797 -1421759 774393203 -850375566 -494997105 -809652151 -814047168 746857891 -795028888 -570742310 -959960136 -915758719 -854396156 418446838 -283737607 543414014 797897259 117530310 758355779 -674509215 61302689 -62465551 119071913 -655423406 -245461841 -653965375 -631498564 649223578 305259210 -887322977 -174597075 337373585 -776273728 -379797403 -784814133 -556484678 -371843771 813881693 22406169 -437156157 44050322 6464235 291815614 -480992422 -252863076 -152803578 108118126 -995060304 95181127 -208660758 471155691 -898742727 327857583 -878921697 715872224 708562299 32907047 861805278 -431739405 -803572296 -340332997 -771629543 343880342 914034163 903260738 -118976632 116074913 161770591 514709139 -140378330 328101738 466714076 -150625906 418115537 510359412 132159313 403779818 -86422587 -262422484 82547865 -511574326 799537884 -68400467 311848737 -487786220
Output 4 :
Exceeding limit!




#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ofstream outfile;
    outfile.open("numbers.txt");

    int n;
    cin >> n;

    if (n > 100) {
        cout << "Exceeding limit!" << endl;
        return 0; 
    }

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        outfile << num << " ";
    }
    outfile.close();

    ifstream infile;
    infile.open("numbers.txt");

    int num;
    int evenCount = 0;
    int oddCount = 0;
    while (infile >> num) {
        if (num % 2 == 0) {
            evenCount++;
        } 
        else {
            oddCount++;
        }
    }

    cout << "Even: " << evenCount << endl;
    cout << "Odd: " << oddCount << endl;

    infile.close();
    return 0;
}