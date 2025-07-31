#include <iostream>
#include <iomanip> // For formatting output

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Default constructor initializes time to 0
    Time() : hours(0), minutes(0), seconds(0) {}

    // Parameterized constructor to initialize time to fixed values
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {
        normalize();
    }

    // Member function to display time in HH:MM:SS format
    void display() const {
        std::cout << std::setw(2) << std::setfill('0') << hours << ":"
                  << std::setw(2) << std::setfill('0') << minutes << ":"
                  << std::setw(2) << std::setfill('0') << seconds << std::endl;
    }

    // Member function to add two Time objects
    Time add(const Time &t) const {
        Time result;
        result.hours = hours + t.hours;
        result.minutes = minutes + t.minutes;
        result.seconds = seconds + t.seconds;
        result.normalize();
        return result;
    }

private:
    // Normalize time to ensure valid ranges for hours, minutes, and seconds
    void normalize() {
        if (seconds >= 60) {
            minutes += seconds / 60;
            seconds %= 60;
        }
        if (minutes >= 60) {
            hours += minutes / 60;
            minutes %= 60;
        }
        if (hours >= 24) {
            hours %= 24; // Optional: Wrap around to a 24-hour format
        }
    }
};

int main() {
    // Create time objects
    Time t1(2, 45, 50);
    Time t2(1, 20, 15);

    // Display initial times
    std::cout << "Time 1: ";
    t1.display();

    std::cout << "Time 2: ";
    t2.display();

    // Add times
    Time t3 = t1.add(t2);

    // Display the result
    std::cout << "Sum of Time 1 and Time 2: ";
    t3.display();

    return 0;
}
