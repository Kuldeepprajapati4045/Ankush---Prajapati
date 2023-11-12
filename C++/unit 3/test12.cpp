Meena is working on a program to calculate the volume of different boxes. She has defined a class named Box with various constructors and a member function to calculate the volume. However, she is having difficulty understanding and implementing the code correctly.



Create a class Box with the following public attributes: double width, double height, double depth.



Include the default constructor Box() [default value is 0], 

Parameterized constructor 1 Box (double w, double h, double d), 

Parameterized constructor 2 Box (double len), 

A method double volume(), which returns the volume.

Calculate and display the volume of each box (mybox1, mybox2, and mycube).



Note: This is a sample question asked in a TCS interview.

Input format :
The first line consists of three double values: width (w), height (h), and depth (d) of the box, separated by space.

The second line consists of a double value representing the length of the side of the cube.

Output format :
The output displays the following: the volume of each box and cube as double point values in separate lines:



The volume of mybox1 is [volume of mybox1].

The volume of mybox2 is [volume of mybox2].

The volume of mycube is [volume of mycube].



Refer to the sample output for the exact format.

Code constraints :
1.0 <= w <= 100.0

1.0 <= h <= 100.0

1.0 <= d <= 100.0

Sample test cases :
Input 1 :
2.3 5.3 10.3
3.2
Output 1 :
Volume of mybox1 is 0
Volume of mybox2 is 125.557
Volume of mycube is 32.768


#include<iostream>
using namespace std;

class Box{
    public:
    double width, height, depth;
    Box(double w, double h, double d){
        width = w;
        height = h;
        depth = d;
    }
  
    Box(){
        width = height = depth = 0;
    }
  
    Box(double len){
        width = height = depth = len;
    }
  
    double volume(){
        return width * height * depth;
    }
};
int main() {
        double h,d,l,c;
        cin>>h>>d>>l;
        Box mybox1;
        Box mybox2(h, d, l);
        
        cin>>c;
        Box mycube(c);
  
        double vol;
  
        vol = mybox1.volume();
        cout<<"Volume of mybox1 is "<<vol<<endl;
  
        vol = mybox2.volume();
        cout<<"Volume of mybox2 is "<<vol<<endl;
  
        vol = mycube.volume();
        cout<<"Volume of mycube is "<<vol<<endl;
}