You are organizing a gift distribution event, and you want to ensure that each participant receives a unique combination of gifts. You have a set of x different types of gifts available, numbered from 1 to x. Each participant should receive a total of n gifts. However, you want to distribute the gifts in such a way that each participant receives a combination of gifts that can be expressed as a sum of nth powers of unique natural numbers.



Write a program that takes the total number of available gift types x and the power n as input. The program should calculate and return the number of unique combinations of gifts that can be distributed following the given criteria using recursion.



Example 1



Input:

10

2



Output: 

1



Explanation:

x = 10

n = 2

10 = 12 + 32, hence we have only 1 possibility.



Example 2



Input:

100

2



Output: 

3



Explanation:

x = 100

n = 2

100 = 102 OR 62 + 82 OR 12 + 32 + 42 + 52 + 72, hence total 3 possibilities.



Function Specifications:

int getAllWays(int remainingSum, int power, int base);



Note: This is a sample question asked in a HCL interview.

Input format :
The first line of input consists of the value of integer x.

The second line of input consists of the value of integer n.

Output format :
The output prints the number of ways to express x as a sum of nth powers of unique natural numbers.

Code constraints :
0 < x <=70000

0 < n <=5

Sample test cases :
Input 1 :
10
2
Output 1 :
1
Input 2 :
100
2
Output 2 :
3



#include <iostream>
#include <cmath>

int getAllWays(int remainingSum, int power, int base);

int getAllWays(int remainingSum, int power, int base) {
    int result = 1;
    for (int i = 1; i <= power; i++) {
        result *= base;
    }

    if (result == remainingSum)
        return 1;

    if (result > remainingSum)
        return 0;

    return getAllWays(remainingSum - result, power, base + 1) + getAllWays(remainingSum, power, base + 1);
}

int main() {
    int x, n;
    std::cin >> x;
    std::cin >> n;

    int ways = getAllWays(x, n, 1);

    std::cout  << ways << std::endl;

    return 0;
}