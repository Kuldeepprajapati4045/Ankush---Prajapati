Ranveer is working on an employee management system for a company. The system needs to store and process employee data, including their name, employee ID, years of experience, and salary. The program should be utilized to input and process the data for multiple employees. 



Create a structure named DEPT with the following fields: Name, emp-id, years_of_experience, and Basic salary.



It then applies a salary increment based on the years of experience as follows:



Define an array of structures for ‘n’ employees, check the following constraints, and print the results.

Increase the salaries of those employees who have worked for 10 years or more by 10%.
Increase the salaries of those employees who have experience ranging from 5 to 9 years by 5%.
Increase the salaries of those employees who have experience ranging from 1 to 4 years by 2%.


Note: This is a sample question asked in an Accenture interview.

Input format :
The first line of the input consists of the value of n.

The next n lines of inputs are the name, ID, years of experience, and salary, separated by a space.

Output format :
The output prints the employee details with updated salaries.



Refer to the sample outputs for the formatting specifications.

Sample test cases :
Input 1 :
3
alice 101 10 40000
bob 102 8 35000
charles 103 4 25000
Output 1 :
Employee Name : alice
Employee Id : 101
years of experience : 10
salary : 44000

Employee Name : bob
Employee Id : 102
years of experience : 8
salary : 36750

Employee Name : charles
Employee Id : 103
years of experience : 4
salary : 25500

Input 2 :
4
alice 101 10 40000
bob 102 8 35000
charles 103 4 25000
david 104 12 50000
Output 2 :
Employee Name : alice
Employee Id : 101
years of experience : 10
salary : 44000

Employee Name : bob
Employee Id : 102
years of experience : 8
salary : 36750

Employee Name : charles
Employee Id : 103
years of experience : 4
salary : 25500

Employee Name : david
Employee Id : 104
years of experience : 12
salary : 55000




#include<iostream>
using namespace std;
struct DEPT
{
    char name[20];
    int emp_id;
    int yofex;
    int salary;
};
int main()
{
    int n,i;
 
    cin>>n;
    struct DEPT d[n];
    for(i=0;i<n;i++)
    {
       
        cin>>d[i].name>>d[i].emp_id>>d[i].yofex>>d[i].salary;
    }
    
    for(i=0;i<n;i++)
    {
        if(d[i].yofex>=10)
            d[i].salary=(d[i].salary*10)/100+ d[i].salary;
        else if(d[i].yofex>=5 &&d[i].yofex<=9)
           d[i].salary=(d[i].salary*5)/100+ d[i].salary;
        else 
            d[i].salary=(d[i].salary*2)/100+ d[i].salary;
    }
    
    for(i=0;i<n;i++)
    {
        cout<<"Employee Name : "<<d[i].name;
      
        cout<<"\nEmployee Id : "<<d[i].emp_id;
       
        cout<<"\nyears of experience : "<<d[i].yofex;
        
        cout<<"\nsalary : "<<d[i].salary<<endl;
   
        cout<<endl;
    }
}