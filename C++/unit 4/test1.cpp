In a futuristic city where time was everything, a brilliant scientist named Dr. Smith created a unique Time class capable of decrementing time by a minute with the overloaded -- operator.



One day, a young time traveler named Max stumbled upon Dr. Smith's invention and decided to test its capabilities. Max entered a specific time into the console, and the Time class worked its magic, beautifully displaying the time before and after the decrement.



As the clock ticked back, Max marveled at the power of operator overloading, realizing the immense potential it held for their future time-traveling adventures.



Note:

The time format should always have two digits for hours and two digits for minutes, with leading zeros if required (e.g., 01:05, 10:09).



The program should handle edge cases correctly, such as decrementing 00:00, which should display an error message indicating that the time cannot be decremented further.

Input format :
The input consists of a single line containing two integers separated by a space: H and M, where H represents the hours (0 to 23) and M represents the minutes (0 to 59).

Output format :
The output displays two lines:



The first line should contain the original time in the format HH:MM.

The second line should contain the updated time after decrementing one minute in the format HH:MM.



Refer to the sample output for further formatting specifications.

Code constraints :
0 ≤ H ≤ 23

0 ≤ M ≤ 59

Sample test cases :
Input 1 :
12 57
Output 1 :
Time before decrement: 12:57
Time after decrement: 12:56
Input 2 :
00 00
Output 2 :
Time before decrement: 0:00
Cannot decrement further. Time is already at 00:00.
Time after decrement: 0:00





#include <iostream>

class Time {
private:
    int hours;
    int minutes;

public:
    Time(int h = 0, int m = 0) : hours(h), minutes(m) {}

    Time operator--() {
        if (minutes == 0) {
            if (hours == 0) {
              
                std::cout << "Cannot decrement further. Time is already at 00:00.\n";
            } else {
                hours--;
                minutes = 59;
            }
        } else {
            minutes--;
        }
        return *this;
    }

    void display() {
        std::cout << hours << ":" << (minutes < 10 ? "0" : "") << minutes;
    }
};

int main() {
    int hours, minutes;

    std::cin >> hours >> minutes;

    Time t(hours, minutes);
    std::cout<< "Time before decrement: ";

    t.display();
    std::cout<<"\n";

    --t;
    std::cout<< "Time after decrement: ";
    t.display();

    return 0;
}
