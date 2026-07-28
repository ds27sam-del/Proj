#include <iostream>
#include <string>
using namespace std;
int main() {
    int choice, quantity;
    string itemName = "";
    float price = 0.0, totalAmount = 0.0;

    cout << "=========================================\n";
    cout << "             RESTAURANT MENU             \n";
    cout << "=========================================\n ";
    cout << "Code \t Item Name \t Price" << "\n";
    cout << "-----------------------------------------\n";
    cout << "1. \t Pizza \t \t 250" << "\n";
    cout << "2. \t Burger \t 120" << "\n";
    cout << "3. \t Sandwich \t 100" << "\n";
    cout << "4. \t Cold Drink \t 50"  << "\n";
    cout << "5. \t Coffee \t 80"  << "\n";
    cout << "=========================================\n\n";

    cout << "Enter item code (1-5): ";
    cin >> choice;

    switch (choice) {
        case 1:
            itemName = "Pizza";
            price = 250.0;
            break;
        case 2:
            itemName = "Burger";
            price = 120.0;
            break;
        case 3:
            itemName = "Sandwich";
            price = 100.0;
            break;
        case 4:
            itemName = "Cold Drink";
            price = 50.0;
            break;
        case 5:
            itemName = "Coffee";
            price = 80.0;
            break;
        default:
            cout << "\nError: Invalid item code! Please choose between 1 and 5.\n";
            return 0;
    }

    cout << "Enter quantity: ";
    cin >> quantity;

    if (quantity <= 0) {
        cout << "\nError: Quantity must be greater than 0.\n";
        return 0;
    }

    totalAmount = price * quantity;

    cout << "\n=========================================\n";
    cout << "               FINAL BILL                \n";
    cout << "=========================================\n";
    cout << "Item Name : \t" << itemName << "\n";
    cout << "Quantity : \t" << quantity << "\n";
    cout << "Unit Price" << ": \tRs. " << price << "\n";
    cout << "-----------------------------------------\n";
    cout << "Total Amount"<< ": \tRs. " << totalAmount << "\n";
    cout << "=========================================\n";

    return 0;
}