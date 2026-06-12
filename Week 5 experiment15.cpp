#include <iostream>
using namespace std;

class Date {
    int day, month, year;

public:
    void input() {
        cout << "Enter day month year: ";
        cin >> day >> month >> year;

        if (day < 1 || day > 31 || month < 1 || month > 12) {
            cout << "Invalid Date!";
            exit(0);
        }
    }

    void format1() {
        cout << month << "/" << day << "/" << year << endl;
    }

    void format2() {
        string m[] = {"January","February","March","April","May","June",
                      "July","August","September","October","November","December"};
        cout << m[month-1] << " " << day << ", " << year << endl;
    }

    void format3() {
        string m[] = {"January","February","March","April","May","June",
                      "July","August","September","October","November","December"};
        cout << day << " " << m[month-1] << " " << year << endl;
    }
};

int main() {
    Date d;
    d.input();

    d.format1();
    d.format2();
    d.format3();

    return 0;
}
