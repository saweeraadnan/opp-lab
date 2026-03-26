#include <iostream>
using namespace std;

struct Student {
    int id;
    int marks;
};

int main() {
    Student st1 = {1, 80};
    Student st2 = {2, 75};
    Student st3 = {3, 90};

    int totalMarks = st1.marks + st2.marks + st3.marks;

    cout << "Total Marks: " << totalMarks;

    return 0;
}