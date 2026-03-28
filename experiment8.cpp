#include <iostream>
using namespace std;

struct Student {
    string name;
    int roll;
    int m1, m2, m3;
};

int main() {
    Student s;

    cout << "Enter name, roll, marks: ";
    cin >> s.name >> s.roll >> s.m1 >> s.m2 >> s.m3;

    int total = s.m1 + s.m2 + s.m3;

    cout << "Total Marks: " << total;

    return 0;
}