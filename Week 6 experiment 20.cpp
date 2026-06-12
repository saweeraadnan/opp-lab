#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    int idNumber;
    string department;
    string position;

public:
    Employee()
    {
        name = "";
        idNumber = 0;
        department = "";
        position = "";
    }
    Employee(string n, int id, string dept, string pos)
    {
        name = n;
        idNumber = id;
        department = dept;
        position = pos;
    }
    Employee(string n, int id)
    {
        name = n;
        idNumber = id;
        department = "";
        position = "";
    }
    void setName(string n) { name = n; }
    void setId(int id) { idNumber = id; }
    void setDepartment(string d) { department = d; }
    void setPosition(string p) { position = p; }

    string getName() { return name; }
    int getId() { return idNumber; }
    string getDepartment() { return department; }
    string getPosition() { return position; }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << idNumber << endl;
        cout << "Department: " << department << endl;
        cout << "Position: " << position << endl;
        cout << "-------------------------" << endl;
    }
};

int main()
{
    Employee e1("Ali", 101, "HR", "Manager");
    Employee e2("Sara", 102, "IT", "Developer");
    Employee e3("Ahmed", 103);

    e3.setDepartment("Finance");
    e3.setPosition("Accountant");

    e1.display();
    e2.display();
    e3.display();

    return 0;
}
