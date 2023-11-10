Dharun is a teacher and has just finished grading the exams of his students. He wants to analyze the performance of his students by finding the smallest difference between the scores of any two students. Help him write the that will help him to calculate this smallest difference so that he can generate the report for the same using pointer arithmetics.



Function Name: int findSmallestDifference - This function calculates and returns the smallest difference between any two students' scores.



Example



Input:

5

100 89 95 56 66



Output:

5



Explanation:

In this scenario, the program takes input for the number of students (5) and their respective exam scores. It calculates the smallest difference between any two scores (100 and 95), which in this case is 5. This indicates that the closest scores among the students differ by a margin of 5 points.



Note: This is a sample question asked in a TCS interview.

Input format :
The first line of input consists of the number of students, n.

The second line of input consists of n space-separated scores.

Output format :
The output displays the smallest difference between any two students.

Code constraints :
3 < n <= 300

Sample test cases :
Input 1 :
5
100 89 95 56 66
Output 1 :
5


#include <iostream>
#include <cstdlib> 
using namespace std;

int findSmallestDifference(int* arr, int size) {
    if (size < 2)
        return -1; 
    
    int smallestDiff = abs(*(arr + 1) - *arr); 
    int* ptr1 = arr;
    int* ptr2 = arr + 1;

    while (ptr1 < (arr + size - 1)) {
        while (ptr2 < (arr + size)) {
            int diff = abs(*ptr2 - *ptr1); 
            if (diff < smallestDiff)
                smallestDiff = diff;
            ptr2++;
        }
        ptr1++;
        ptr2 = ptr1 + 1;
    }

    return smallestDiff;
}

int main() {
    int size;
    cin >> size;
    int arr[size];
    for(int i = 0; i < size; i++)
        cin>> arr[i];
        
    int result = findSmallestDifference(arr, size);
    cout << result ;
    
    return 0;
}