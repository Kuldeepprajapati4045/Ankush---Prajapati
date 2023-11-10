The local marathon organization wants to calculate the time differences between the start and finish times of participants. They require a program that takes the start time and finish time as input and displays the duration of the race in hours, minutes, and seconds.



To achieve this, you are tasked with developing a program that utilizes the provided Time structure. The program should prompt the user to enter the start time and finish time in the format "HH:MM:SS". It will then calculate the time difference between the two and display it in the format "HH:MM:SS".



Function Specifications: void calcDifference(const Time& t1, const Time& t2, Time& result)



Note: This is a sample question asked in a Cocubes interview.

Input format :
The first input line consists of Time 1 in HH:MM:SS format.

The second input line consists of Time 2 in HH:MM:SS format.



Refer to the sample input for formatting specifications.

Output format :
The output prints the difference between the two time periods.



Refer to the sample output for formatting specifications.

Code constraints :
The time should be displayed in 24-hour format.

T1>T2

Sample test cases :
Input 1 :
12:34:55
8:12:15
Output 1 :
04:22:40
Input 2 :
06:45:30
01:30:15
Output 2 :
05:15:15


#include <iostream>
#include <iomanip>

using namespace std;

struct Time {
    int hours;
    int minutes;
    int seconds;
};

void calcDifference(const Time& t1, const Time& t2, Time& result) {
    int seconds1, seconds2, totalSeconds;
    seconds1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    seconds2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
    totalSeconds = (seconds1 > seconds2) ? (seconds1 - seconds2) : (seconds2 - seconds1);
    result.hours = totalSeconds / 3600;
    result.minutes = (totalSeconds % 3600) / 60;
    result.seconds = totalSeconds % 60;
}

int main() {
    Time t1, t2, diff;
    char colon;
    cin >> t1.hours >> colon >> t1.minutes >> colon >> t1.seconds;
    cin >> t2.hours >> colon >> t2.minutes >> colon >> t2.seconds;
    calcDifference(t1, t2, diff);
    cout << setfill('0') << setw(2) << diff.hours << ":"
         << setw(2) << diff.minutes << ":" << setw(2) << diff.seconds << endl;
    return 0;
}
