Imagine you are developing a weather monitoring system for a meteorological research institute. As part of the system, you need to implement a feature that finds the highest recorded temperature for a specific region. Temperature data is stored in a 2D array, where each row represents a day and each column represents a different region.



The program should prompt the user to enter the temperature data for each region and day. Afterward, it should display the highest recorded temperature.



Function Name: int findMaxElement



Note: This is a sample question asked in an HCL interview.

Input format :
The first line of the input consists of the values of rows n and columns m, separated by a space.

The next n lines consist of m space-separated integers.

Output format :
The output prints the maximum element in the given 2D array.

Code constraints :
Define m and n = 10

1 <= m, n <= 10

-105 <= Elements of the 2D array <= 105

Sample test cases :
Input 1 :
3 4
34 37 -26 -63
78 95 -61 -44
16 61 45 -16
Output 1 :
95




#include <iostream>
using namespace std;

const int MAX_ROWS = 10; 
const int MAX_COLS = 10; 

int findMaxElement(int arr[][MAX_COLS], int rows, int cols) {
    int maxElement = arr[0][0];

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (arr[i][j] > maxElement) {
                maxElement = arr[i][j];
            }
        }
    }

    return maxElement;
}

int main() {
    int rows, cols;
    cin >> rows;
    cin >> cols;

    int arr[MAX_ROWS][MAX_COLS];

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> arr[i][j];
        }
    }

    int maxElement = findMaxElement(arr, rows, cols);

    cout << maxElement;

    return 0;
}
