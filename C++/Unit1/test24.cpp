Emma is an avid mathematician and wants to develop a program that can generate prime numbers within a given range. She believes that this program will be helpful for her research work.



Can you assist Emma by creating a C++ program that takes a starting and ending number as input and generates all the prime numbers within that range using a reference variable?



Function Name: void generatePrimesInRange



Note: This is a sample question asked in TCS recruitment.

Input format :
The input consists of start and end values separated by a space.

Output format :
The output displays the prime numbers in the given range separated by space.

Code constraints :
0 <= M, N <= 500

Start and end values are inclusive.

Sample test cases :
Input 1 :
0 10
Output 1 :
2 3 5 7 



#include <iostream>
using namespace std;
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    
    return true;
}

void generatePrimesInRange(int start, int end, int& primeCount, int* &primeNumbers) {
    primeCount = 0;
    
    for (int num = start; num <= end; num++) {
        if (isPrime(num)) {
            primeNumbers[primeCount] = num;
            primeCount++;
        }
    }
}

int main() {
    int start, end;
    cin >> start;
    cin >> end;
    
    const int MAX_SIZE = end - start + 1;
    int* primeNumbers = new int[MAX_SIZE];
    int primeCount = 0;
    
    generatePrimesInRange(start, end, primeCount, primeNumbers);
    
    for (int i = 0; i < primeCount; i++) {
        cout << primeNumbers[i] << " ";
    }
    delete[] primeNumbers;
    
    return 0;
}
