#include <iostream>
using namespace std;

struct Employee {
    int empNo;
    float salary;
};

void display(Employee e) {
    cout << "Employee No: " << e.empNo << endl;
    cout << "Salary: " << e.salary << endl;
}

int main() {
    Employee e1, e2, e3;

    cout << "Enter data for 3 employees:\n";

    cin >> e1.empNo >> e1.salary;
    cin >> e2.empNo >> e2.salary;
    cin >> e3.empNo >> e3.salary;

    display(e1);
    display(e2);
    display(e3);

    return 0;
}