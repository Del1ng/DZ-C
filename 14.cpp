#include <iostream>
#include <vector>
#include <string>
using namespace std;

class OrderItem {
private:
    string itemName;
    double price;
    int amount;

public:
    OrderItem(string name, double price, int qty)
        : itemName(name), price(price), amount(qty) {
    }

    double getCost() const {
        return price * amount;
    }

    void printItem() const {
        cout << itemName << " x" << amount << " @ " << price
            << " = " << getCost() << " $" << endl;
    }
};

int main() {

    vector<OrderItem> orders;

    orders.emplace_back("Apple", 0.5, 10);
    orders.emplace_back("Milk", 1.2, 2);
    orders.emplace_back("Bread", 1.0, 3);
    orders.emplace_back("Cheese", 2.5, 1);

    double totalCost = 0.0;

    cout << "Order list:\n";
    for (const auto& item : orders) {
        item.printItem();
        totalCost += item.getCost();
    }

    cout << " " << endl;
    cout << "Total cost: " << totalCost << " $" << endl;

    return 0;
}