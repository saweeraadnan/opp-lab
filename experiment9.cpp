#include <iostream>
using namespace std;

struct Date {
    int day, month, year;
};

int main() {
    Date d;
    char slash;

    cout << "Enter date (dd/mm/yyyy): ";
    cin >> d.day >> slash >> d.month >> slash >> d.year;

    cout << "Date is: " << d.day << "/" << d.month << "/" << d.year;

    return 0;
}