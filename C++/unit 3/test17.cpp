Dhivakar is working on a program that involves processing numerical data. He needs to write a program that allows the user to input a set of numbers, stores them in an array, and then writes the numbers to a file named "sample.dat". Additionally, the program should find the maximum and minimum values from the input numbers and display them on the console.



Note: This is a sample question asked in an Amcat interview.

Input format :
The first line of the input consists of the number of values to be entered (N).

The second line of input consists of the values.

Output format :
The output prints the maximum and minimum values, respectively.



Refer to the sample output for the format specifications.

Code constraints :
2<=N<=100

Sample test cases :
Input 1 :
5
3 5 2 4 1
Output 1 :
5 1
Input 2 :
3
67 54 3
Output 2 :
67 3





#include <iostream>
#include <fstream>
using std::ofstream; 
using namespace std;
 
int main()
{
    fstream file;
   file.open("sample.dat",ios::out);
   ofstream outdata;
   int i,j,n,a,max,min;
   cin>>n;
   int number[n];
 for (i=0; i<n; ++i)
 {
   cin>>number[i];
 }
 outdata.open("sample.dat"); 
for (i=0; i<n; ++i)
{
      outdata<<number[i]<<endl;
}
   outdata.close();
   max = number[0];
   min = number[0];
for (i = 1; i < n; i++)
    {
        if(number[i]>max)
            max = number[i];
        if(number[i]<min)
            min = number[i];
    }
    cout<<max<<" "<<min;
    
     file.close();
    return 0;
}

