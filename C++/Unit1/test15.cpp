Imagine you are designing a program for a construction company that needs to keep track of rectangles being used for various projects. You are tasked with creating a class named "Rectangle" to represent each rectangle used in the projects. The class should have the following specifications:



A private static data member named "count" keeps track of the total number of rectangle objects created. It should be initialized to 0.
A public static member function named "getCount" returns the value of "count". This function allows the company to retrieve the total number of rectangles created.
A public member function named "setDimensions" takes in the values of "length" and "width" as parameters and sets the corresponding data members for a rectangle object. This function allows the company to set the dimensions of a rectangle.
A public member function named "getArea" calculates and returns the area of a rectangle object. This function allows the company to retrieve the area of a rectangle for various calculations.
Two private data members named "length" and "width" store the integer values of the length and width of a rectangle. These data members are specific to each rectangle object.


Based on the given specifications, your task is to implement the "Rectangle" class that meets the requirements mentioned above.



Note: This is a sample question asked in a HCL interview.

Input format :
The first integer denotes the number of rectangles, n.

The next n lines of inputs consist of the length and breadth of each rectangle separated by space.

Output format :
The output displays the total number of rectangles in the first line, followed by the next n lines containing the area of rectangles, as per the sample output.



Refer to the sample output for the formatting specifications.

Sample test cases :
Input 1 :
3
10 20
20 30
30 40
Output 1 :
Total number of rectangles: 3
Area of rectangle 1: 200
Area of rectangle 2: 600
Area of rectangle 3: 1200




#include <iostream>
using namespace std;

class Rectangle {
    private:
        static int count;
        int length, width;
    public:
        static int getCount() {
            return count;
        }
        void setDimensions(int l, int w) {
            length = l;
            width = w;
        }
        int getArea() {
            return length * width;
        }
        Rectangle() {
            count++;
        }
};

int Rectangle::count = 0;

int main() {
    int n;
    
    cin >> n;
    Rectangle *rect = new Rectangle[n];
    for (int i = 0; i < n; i++) {
        int l, w;
        
        cin >> l >> w;
        rect[i].setDimensions(l, w);
    }
    cout << "Total number of rectangles: " << Rectangle::getCount() << endl;
    for (int i = 0; i < n; i++) {
        cout << "Area of rectangle " << i+1 << ": " << rect[i].getArea() << endl;
    }
    delete[] rect;
    return 0;
}