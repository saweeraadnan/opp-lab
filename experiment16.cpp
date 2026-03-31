#include <iostream>
using namespace std;

class Distance {
    int feet;
    float inches;

public:
    void setFeet(int f) {
        feet = f;
    }

    void setInches(float i) {
        inches = i;
    }

    void showDistance() {
        cout << feet << " feet " << inches << " inches\n";
    }
};

int main() {
    Distance d;

    d.setFeet(5);
    d.setInches(7.5);

    d.showDistance();

    return 0;
}