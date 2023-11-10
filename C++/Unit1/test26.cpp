Sarah is a math enthusiast who loves to analyze sets of numbers and calculate their sum. She recently wrote a program to find the sum of 'n' numbers using a function called sum(). To test her function, she created a program that allows her to input a set of numbers and compute their sum using the concept of call by Value.



When Sarah runs her program, she is prompted to enter the numbers one by one. After inputting all the numbers, the program invokes the sum() function. Inside the function, the numbers are passed by value, meaning that the original values are not modified. The function iterates through the provided numbers, accumulating their sum.



Once the computation is complete, the program displays the sum on the screen, allowing Sarah to quickly analyze the set of numbers she inputted. This Call by Value approach ensures that the original numbers remain unchanged, providing Sarah with accurate results and preserving the integrity of the input data.



Note: This is a sample question asked in Capgemini recruitment.

Input format :
The first line of the input consists of the value of n.

The next n lines of the input consist of the array of elements.

Output format :
The output prints the sum of elements.

Sample test cases :
Input 1 :
5
14
25
36
47
58
Output 1 :
180
Input 2 :
8
123
456
789
147
258
369
951
753
Output 2 :
3846





#include <iostream>

int sum(int a[], int n) {
    int summ = 0;
    for (int i = 0; i < n; i++) {
        summ += a[i];
    }
    return summ;
}

int main() {
    int n;
    std::cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    int summ = sum(a, n);
    std::cout << summ << std::endl;
    
    return 0;
}
