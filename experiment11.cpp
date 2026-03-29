#include <iostream>
using namespace std;

struct MovieData {
    string title;
    string director;
    int year;
    int time;
};

void display(MovieData m) {
    cout << "\nTitle: " << m.title;
    cout << "\nDirector: " << m.director;
    cout << "\nYear Released: " << m.year;
    cout << "\nRunning Time: " << m.time << " mins\n";
}

int main() {
    MovieData m1, m2;

    m1 = {"Inception", "Christopher Nolan", 2010, 148};
    m2 = {"Avatar", "James Cameron", 2009, 162};

    display(m1);
    display(m2);

    return 0;
}