#include <iostream>
using namespace std;

struct Employee {
    float hours[5];
    float rate;
};

int main() {
    Employee e;
    e.rate = 11;

    float totalHours = 0;

    cout << "Enter working hours for 5 days:\n";
    for (int i = 0; i < 5; i++) {
        cin >> e.hours[i];
        totalHours += e.hours[i];
    }

    float wage = totalHours * e.rate;

    cout << "Total Wage: " << wage << " euros";

    return 0;
}