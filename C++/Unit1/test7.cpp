The task for the student is to create a program that prompts the user to enter a number representing a month and displays the corresponding month as output. To accomplish this, the student should implement a class named Year that includes an enumeration called Month. The Month enumeration should consist of twelve constants representing the months of the year. The student needs to ensure that the program utilizes the Year class and the Month enumeration to correctly map the input number to the corresponding month name for display.



Note: This is a sample question asked in an Infosys interview.

Input format :
The input consists of an integer representing the desired month number, n.

Output format :
If the input is a valid month (between 1 and 12), the output displays the corresponding month as a string.

If the input is invalid, display "Invalid month input".



Refer to the sample output for the formatting specifications.

Code constraints :
1 <= n <= 12

Sample test cases :
Input 1 :
6
Output 1 :
Month: JUNE


#include <iostream>
using namespace std;

class Year {
public:
    enum Month {
        JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE,
        JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
    };

    void setMonth(Month month) {
        currentMonth = month;
    }

    Month getMonth() {
        return currentMonth;
    }

    string getMonthString(Month month) {
        switch (month) {
            case JANUARY: return "JANUARY";
            case FEBRUARY: return "FEBRUARY";
            case MARCH: return "MARCH";
            case APRIL: return "APRIL";
            case MAY: return "MAY";
            case JUNE: return "JUNE";
            case JULY: return "JULY";
            case AUGUST: return "AUGUST";
            case SEPTEMBER: return "SEPTEMBER";
            case OCTOBER: return "OCTOBER";
            case NOVEMBER: return "NOVEMBER";
            case DECEMBER: return "DECEMBER";
            default: return "Invalid month";
        }
    }

private:
    Month currentMonth;
};

int main() {
    Year year;

    int month;
    cin >> month;

    if (month >= 1 && month <= 12) {
        // Subtracting 1 from the input to match the enum values
        Year::Month selectedMonth = static_cast<Year::Month>(month - 1);
        year.setMonth(selectedMonth);

        cout << "Month: " << year.getMonthString(year.getMonth()) << endl;
    } else {
        cout << "Invalid month input" << endl;
    }

    return 0;
}
