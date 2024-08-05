#include <iostream>
using namespace std;

class Date {
protected:
    int day, month, year;
public:
    Date(int d, int m, int yr) {
        day = d;
        month = m;
        year = yr;
    }

    ~Date() {}

    void display() const {
        cout << year << "/" << month << "/" << day << endl;
    }

    void set(int d, int m, int yr) {
        day = d;
        month = m;
        year = yr;
    }
};

class Time {
protected:
    int hour, minute, second;
public:
    Time(int hr, int min, int sec) {
        hour = hr;
        minute = min;
        second = sec;
    }

    ~Time() {}

    void display() const {
        cout << "Time is " << hour << ":" << minute << ":" << second << endl;
    }

    void set(int hr, int min, int sec) {
        hour = hr;
        minute = min;
        second = sec;
    }
};

class DateAndTime : public Date, public Time {
public:
    DateAndTime(int d, int m, int yr, int hr, int min, int sec)
        : Date(d, m, yr), Time(hr, min, sec) {}

    void display()  {
        Date::display();
        Time::display();
    }
};

int main() {
    DateAndTime Watch(31, 8, 2024, 4, 19, 55);
    cout << "Before resetting:" << endl;
    Watch.display();

    Watch.Date::set(21, 5, 2024);
    Watch.Time::set(2, 30, 42);
    cout << "After resetting:" << endl;
    Watch.display();

    return 0;
}
