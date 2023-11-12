You are tasked with creating a program to manage the coordinates of two points in a two-dimensional space. Each point is represented by its x and y coordinates. The program should allow the user to input the coordinates for both points and then display the coordinates of these two points. Use this pointer to accomplish the given task.



Note: This is a sample question asked in an HCL interview.

Input format :
The first line of the input consists of the X and Y coordinates of point A separated by space.

The second line of the input consists of the X and Y coordinates of point B separated by space..

Output format :
The output displays the coordinates of the two points.



Refer to the sample output for the formatting specifications.

Code constraints :
-105 <= coordinates <= 105

Sample test cases :
Input 1 :
3 4
5 6
Output 1 :
Coordinates:
(x, y) = (3, 4)
(x, y) = (5, 6)
Input 2 :
-6 7
3 -8
Output 2 :
Coordinates:
(x, y) = (-6, 7)
(x, y) = (3, -8)




#include<iostream>

using namespace std;

class Coordinate {
private:
    int x;
    int y;

public:
    void setCoordinate(int x, int y) {
        this->x = x;
        this->y = y;
    }

    void printCoordinate() {
        cout << "(x, y) = (" << this->x << ", " << this->y << ")" << endl;
    }
};

int main() {
    Coordinate pointA, pointB;
    int x, y;

    // Input coordinates for pointA
    cin >> x;
    cin >> y;
    pointA.setCoordinate(x, y);

    // Input coordinates for pointB
    cin >> x;
    cin >> y;
    pointB.setCoordinate(x, y);

    // Print the coordinates
    cout << "Coordinates:\n";
    pointA.printCoordinate();
    pointB.printCoordinate();

    return 0;
}
