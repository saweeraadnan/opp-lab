#include <iostream>
using namespace std;

struct Employee {
    int empNo;
    float salary;
};

void display(Employee e) {
    cout << "\nEmployee No: " << e.empNo;
    cout << "\nSalary: " << e.salary << endl;
}

int main() {
    Employee e[3];

    cout << "Enter data for 3 employees:\n";

    for (int i = 0; i < 3; i++) {
        cout << "\nEmployee " << i + 1 << ":\n";
        cin >> e[i].empNo >> e[i].salary;
    }

    for (int i = 0; i < 3; i++) {
        display(e[i]);
    }

    return 0;
}