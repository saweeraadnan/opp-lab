#include <iostream>
using namespace std;

class Employee {
    string name, department, position;
    int id;

public:
    void setData(string n, int i, string d, string p) {
        name = n;
        id = i;
        department = d;
        position = p;
    }

    void display() {
        cout << "\nName: " << name;
        cout << "\nID: " << id;
        cout << "\nDepartment: " << department;
        cout << "\nPosition: " << position << endl;
    }
};

int main() {
    Employee e1, e2, e3;

    e1.setData("Ali", 101, "IT", "Manager");
    e2.setData("Sara", 102, "HR", "Officer");
    e3.setData("Ahmed", 103, "Finance", "Clerk");

    e1.display();
    e2.display();
    e3.display();

    return 0;
}
