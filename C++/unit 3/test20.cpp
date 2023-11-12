Imagine you are developing a simple finance tool. Write a program where you can enter up to 50 users' monthly incomes. The program stores these incomes in a file called "income.txt" and then displays the annual incomes on the console by multiplying each monthly income by 12. 



Notes: The monthly incomes are written with two precisions within the file and then those values are read and results are calculated.

Input format :
The first line consists of an integer n representing the number of individuals' incomes you want to calculate.

The second line consists of n space-separated positive float values representing each user's monthly income.

Output format :
The output prints the annual incomes for each individual on each line, rounded off to one decimal place.

If n exceeds 50, the output prints "Exceeding limit!".

Code constraints :
1 <= n <= 50

The program assumes that the incomes are valid.

Sample test cases :
Input 1 :
4
31769.24 43787.81 38237.61 40011.79
Output 1 :
381230.9
525453.7
458851.3
480141.5
Input 2 :
51
51142.5 59454.6 40792.06 35052.65 22407.96 19996.24 42661.85 57037.55 59117.38 50547.32 33077.51 33866.49 32898.14 40389.34 53456.79 15378.73 31273.59 42230.45 43787.01 17219.48 41543.5 35807.75 17856.46 42445.58 27953.43 51568.61 28161.83 49743.23 31885.29 26880.01 27311.42 53647.4 33606.16 15710.64 16362.16 25930.0 58274.74 32885.63 46964.54 57996.57 34782.84 41557.8 21074.91 45619.54 16952.62 45764.66 39316.15 52174.11 58921.15 42656.84 18328.48
Output 2 :
Exceeding limit!
Input 3 :
2
10000.00 12000.00
Output 3 :
120000.0
144000.0



#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    ofstream outfile;
    outfile.open("income.txt");
    int n;
    cin >> n;
    if (n > 50) {
        cout << "Exceeding limit!";
        return 0; 
    }
    else{
        for (int i = 0; i < n; i++) {
            float income;
            cin >> income;
            outfile << fixed << setprecision(2) << income << " ";
        }
    }
    outfile.close();

    ifstream infile;
    infile.open("income.txt");

    float income;
    while (infile >> income) {
        float annualIncome = 12 * income;
        cout << fixed << setprecision(1) << annualIncome << endl;
    }

    infile.close();
    return 0;
}