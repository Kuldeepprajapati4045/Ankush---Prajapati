Meena is creating a Calendar application that uses the Date class to represent dates. The Date class has the following requirements:



The class stores the day (dd), month (mm), and year (yy) as integer values.
It has a constructor that initializes the date to 31st December 2022 by default.
Another constructor allows the user to specify a custom date.
The class has a display method to print the date in the format dd-mm-yy.
Input validation is applied:
-The day (dd) value is between 1 and 31. If invalid, it defaults to 30.

-The month (mm) value loops back to 1 if it exceeds 12.

-The y



ear (yy) value is between 2023 and 2998. If invalid, it defaults to 2023.



Write the Date class to fulfill these requirements.



Note: This question helps in clearing AMCAT tests.

Input format :
The input consists of three integers from the user representing the day (d), month (m), and year (y) respectively.

Output format :
The program should display the date in the format "d-m-y" without any formatting.

Code constraints :
The day (d) should be between 1 and 31.

The month (m) should be between 1 and 12.

The year (y) should be between 2023 and 2998.

Sample test cases :
Input 1 :
1 07 2023
Output 1 :
31-12-2022
1-7-2023
Input 2 :
0 14 3023
Output 2 :
31-12-2022
30-2-2023


#include <iostream>
using namespace std;

class Date {
private:
  int dd, mm, yy;

public:
  Date() {
    dd = 31;
    mm = 12;
    yy = 2022;
  }

  Date(int date, int month, int year) {
    dd = date > 0 && date <= 31 ? date : 30;
    mm = (month % 12) == 0 ? 1 : (month % 12);
    yy = year > 2022 && year < 2999 ? year : 2023;
  }

  ~Date() {
  }

  void display() {
    cout << dd << "-" << mm << "-" << yy << "\n";
  }
};

int main() {
  int d, m, y;
  cin >> d >> m >> y;

  Date date1;
  date1.display();

  Date date2(d, m, y);
  date2.display();

  return 0;
}




