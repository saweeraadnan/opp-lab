#include <iostream>
using namespace std;

struct Distance {
    int feet;
    float inches;
};

struct Triangle {
    Distance base;
    Distance height;
};

float toInches(Distance d) {
    return d.feet * 12 + d.inches;
}

int main() {
    Triangle t;

    cout << "Enter base (feet inches): ";
    cin >> t.base.feet >> t.base.inches;

    cout << "Enter height (feet inches): ";
    cin >> t.height.feet >> t.height.inches;

    float baseInches = toInches(t.base);
    float heightInches = toInches(t.height);

    float area = 0.5 * baseInches * heightInches;

    cout << "Area of Triangle: " << area << " square inches";

    return 0;
}