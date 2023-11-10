An ice cream vendor sells his ice-creams in cone (radius r and height h) and square (side r) shaped containers. However, he is unsure of the quantity that can be filled in the two containers. 



You must write a program that prints the volume of the containers given their respective dimensions as input. 



Your class must be named ‘Icecream’ which has two methods with the same name ‘Quantity’ each having the respective dimensions of the containers as the parameters. 



Function Header:

public void Quantity(int r)

public void Quantity(int r, int h)



Formulas:

The volume of a square = r*r*r

The volume of a cone = 0.33*pi*r*r*h



Use variable name as M_PI for pi



Note: This is a sample question asked in a Capgemini interview.

Input format :
The first line of the input consists of the choice (1 for square, 2 for cone).

If the choice is 1, Enter the side of the square in the next line.

If the choice is 2, Enter the radius and height of the cone separated by a space in the next line.



Note: The input type should be a positive integer.

Output format :
The output must display the volume of the container rounded off to two decimal places for which the dimensions are given.

Code constraints :
0 <= r <= 50

0 <= h <= 50

Sample test cases :
Input 1 :
1
4
Output 1 :
64.00
Input 2 :
2
4 5
Output 2 :
82.94


#include <bits/stdc++.h>
#include<cmath>
using namespace std;
class Icecream {
public:
    float Quantity(int r) {
        return r*r*r;
    }
    float Quantity(int r, int h) {
       return 0.33*M_PI*r*r*h;
    }
};
int main() {
    Icecream obj;
    int i,n,r,h;
    cin>>n;
    if(n==1) {
        cin>>r;
        cout<<fixed<<setprecision(2)<<obj.Quantity(r);
    }
    if(n==2) {
        cin>>r>>h;
        cout<<fixed<<setprecision(2)<<obj.Quantity(r,h);
    }
    return 0;
}