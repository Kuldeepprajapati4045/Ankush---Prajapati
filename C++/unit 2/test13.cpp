Sita wants to write a program to create a Student class with the following attributes: int rollno, int mark1, int mark2, and int mark3.



Help her to create an array of objects for the above class. In the main class, calculate and print the following.

Total marks obtained by each student.
The highest mark in each subject with the roll number of the student who scored it.
The student who obtained the highest total mark along with the mark.


Note: This kind of question will be helpful in clearing mPhasis tests.

Input format :
The first line of the input consists of the value of n.

The next n lines consist of roll number, mark1, mark2, and mark3 separated by a space.

Output format :
The first n lines of output print the total marks for each student.

After printing a new line, for each subject, the output prints the student's roll number who scored the highest mark along with the highest mark, separated by a space in three lines.

After printing a new line, the last line prints the roll number of the student who scored the highest total adding up all subjects along with the total marks scored.

Sample test cases :
Input 1 :
5
1 98 85 76
2 85 74 65
3 85 96 75
4 52 65 79
5 52 75 65
Output 1 :
259
224
256
196
192

1 98
3 96
4 79

1 259
Input 2 :
8
1 85 96 74
2 65 85 74
3 95 96 99
4 75 85 65
5 45 85 65
6 85 75 58
7 47 58 69
8 65 74 89
Output 2 :
255
224
290
225
195
218
174
228

3 95
1 96
3 99

3 290





#include<iostream>
using namespace std;

class Student{
    public :
    int  rno;
    int  mark1;
    int  mark2;
    int  mark3;
    void setRno(int r) {
        rno = r;
    }
    void setMark1(int m1) {
        mark1 = m1;
    }
    void setMark2(int m2) {
        mark2 = m2;
    }
    void setMark3(int m3) {
        mark3 = m3;
    }
    int getRno() {
        return rno;
    }
    int getMark1() {
        return mark1;
    }
    int getMark2() {
        return mark2;
    }
    int getMark3() {
        return mark3;
    }
};

int main() {
        int n,i,t;
        cin>>n;
        Student s[n];
        for(i=0;i<n;i++) {
            Student a;
            s[i]=a;
            cin>>t;
            s[i].setRno(t);
            cin>>t;
            s[i].setMark1(t);
            cin>>t;
            s[i].setMark2(t);
            cin>>t;
            s[i].setMark3(t);
        }
        int  totalmarks[n];
        for(i=0;i<n;i++) {
            totalmarks[i] = s[i].getMark1()+s[i].getMark2()+s[i].getMark3();
            cout<<totalmarks[i]<<endl;
        }
        int max1 = 0,max2 =0,max3=0;
        int r1=0, r2=0, r3=0;
        for(i=0;i<n;i++) {
            if(s[i].getMark1() > max1) {
                max1 = s[i].getMark1();
                r1 = s[i].getRno();
            }
        }
        for(i=0;i<n;i++) {
            if(s[i].getMark2() > max2) {
                max2 = s[i].getMark2();
                r2 = s[i].getRno();
            }
        }
        for(i=0;i<n;i++) {
            if(s[i].getMark3() > max3) {
                max3 = s[i].getMark3();
                r3 = s[i].getRno();
            }
        }
        cout << endl;
        cout<<r1<<" "<<max1<<endl;
        cout<<r2<<" "<<max2<<endl;
        cout<<r3<<" "<<max3<<endl;
        int maxtotal = 0, r=0;
        for(i=0;i<n;i++) {
            if(totalmarks[i] > maxtotal) {
                maxtotal = totalmarks[i];
                r = s[i].getRno();
            }
        }
        cout << endl;
        cout<< r << " " << maxtotal ;
}