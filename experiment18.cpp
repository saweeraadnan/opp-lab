#include <iostream>
using namespace std;

class Car {
    int yearModel;
    string company;
    int speed;

public:
    void setData(int y, string c) {
        yearModel = y;
        company = c;
        speed = 0;
    }

    int getSpeed() {
        return speed;
    }

    void accelerate() {
        speed += 5;
    }

    void brake() {
        speed -= 5;
    }
};

int main() {
    Car c;
    c.setData(2022, "Toyota");

    cout << "Accelerating:\n";
    for (int i = 0; i < 5; i++) {
        c.accelerate();
        cout << "Speed: " << c.getSpeed() << endl;
    }

    cout << "\nBraking:\n";
    for (int i = 0; i < 5; i++) {
        c.brake();
        cout << "Speed: " << c.getSpeed() << endl;
    }

    return 0;
}