#include <iostream>
using namespace std;

class Circle
{
private:
    double radius;
    const double pi = 3.14159;

public:
    // Default Constructor
    Circle()
    {
        radius = 0.0;
    }

    // Parameterized Constructor
    Circle(double r)
    {
        radius = r;
    }

    // Setter
    void setRadius(double r)
    {
        radius = r;
    }

    // Getter
    double getRadius()
    {
        return radius;
    }

    double getArea()
    {
        return pi * radius * radius;
    }

    double getDiameter()
    {
        return 2 * radius;
    }

    double getCircumference()
    {
        return 2 * pi * radius;
    }
};

int main()
{
    double r;

    cout << "Enter radius: ";
    cin >> r;

    Circle c(r);

    cout << "Radius: " << c.getRadius() << endl;
    cout << "Area: " << c.getArea() << endl;
    cout << "Diameter: " << c.getDiameter() << endl;
    cout << "Circumference: " << c.getCircumference() << endl;

    return 0;
}
