#include <iostream>
using namespace std;

class Inventory
{
private:
    int itemNumber;
    int quantity;
    double cost;
    double totalCost;

public:
    // Setters with validation
    void setItemNumber(int num)
    {
        if (num >= 0)
            itemNumber = num;
        else
            itemNumber = 0;
    }

    void setQuantity(int q)
    {
        if (q >= 0)
            quantity = q;
        else
            quantity = 0;
    }

    void setCost(double c)
    {
        if (c >= 0)
            cost = c;
        else
            cost = 0;
    }

    // Calculation
    void calculateTotal()
    {
        totalCost = quantity * cost;
    }

    // Display
    void display()
    {
        cout << "Item Number: " << itemNumber << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Cost per Item: " << cost << endl;
        cout << "Total Cost: " << totalCost << endl;
        cout << "-------------------------" << endl;
    }
};

int main()
{
    Inventory item;

    int num, qty;
    double cost;

    cout << "Enter Item Number: ";
    cin >> num;

    cout << "Enter Quantity: ";
    cin >> qty;

    cout << "Enter Cost: ";
    cin >> cost;

    item.setItemNumber(num);
    item.setQuantity(qty);
    item.setCost(cost);

    item.calculateTotal();
    item.display();

    return 0;
}
