/* 
2.Create Time  class with data members
	hours
	minutes
	seconds
and implement following
Default constructor
Parameterized constructor
Destructor
Function for display data
Function to compare two time objects
Function to find out difference between two time objects
 */

#include <iostream>
#include <iomanip>

using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

    // Function to ensure valid time values (private helper)
    bool isValidTime(int h, int m, int s) const {
        return (h >= 0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60);
    }

public:
    // Default constructor (initializes to 00:00:00)
    Time() {
        hours = minutes = seconds = 0;
    }

    // Parameterized constructor (with validation)
    Time(int h, int m, int s) {
        if (isValidTime(h, m, s)) {
            hours = h;
            minutes = m;
            seconds = s;
        } else {
            cout << "Invalid time values. Setting time to 00:00:00." << endl;
            hours = minutes = seconds = 0;
        }
    }

    // Destructor (optional)
    ~Time() {}

    // Function to display time in HH:MM:SS format
    void displayData() const {
        cout << setfill('0') << setw(2) << hours << ":"
             << setfill('0') << setw(2) << minutes << ":"
             << setfill('0') << setw(2) << seconds << endl;
    }

    // Function to compare two time objects
    bool compareTime(const Time& other) const {
        return (hours == other.hours) && (minutes == other.minutes) && (seconds == other.seconds);
    }

    // Function to find the difference between two time objects
    Time findDifference(const Time& other) const {
        int totalSeconds1 = hours * 3600 + minutes * 60 + seconds;
        int totalSeconds2 = other.hours * 3600 + other.minutes * 60 + other.seconds;

        // Ensure the first time is always greater than or equal to the second
        int diffSeconds = totalSeconds1 >= totalSeconds2 ? totalSeconds1 - totalSeconds2 : totalSeconds2 - totalSeconds1;

        // Calculate difference in terms of hours, minutes, and seconds
        int diffHours = diffSeconds / 3600;
        int diffMinutes = (diffSeconds % 3600) / 60;
        int diffSecondsRemaining = (diffSeconds % 3600) % 60;

        // Return a new Time object representing the difference
        return Time(diffHours, diffMinutes, diffSecondsRemaining);
    }
};

int main() {
    Time time1(10, 30, 15); // 10:30:15
    Time time2(8, 45, 0);   // 08:45:00

    cout << "Time 1: ";
    time1.displayData();

    cout << "Time 2: ";
    time2.displayData();

    if (time1.compareTime(time2)) {
        cout << "Time 1 and Time 2 are equal." << endl;
    } else {
        cout << "Time 1 and Time 2 are not equal." << endl;
    }

    Time difference = time1.findDifference(time2);
    cout << "Difference between Time 1 and Time 2: ";
    difference.displayData();

    return 0;
}
