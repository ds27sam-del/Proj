#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    int choice, quantity;
    string itemName = "";
    float price = 0.0, totalAmount = 0.0;

    // Display Menu
    cout << "=========================================\n";
    cout << "             RESTAURANT MENU             \n";
    cout << "=========================================\n ";
    cout << left << setw(10) << "Code" 
         << left << setw(20) << "Item Name" 
         << right << setw(10) << "Price" << "\n";
    cout << "-----------------------------------------\n";
    cout << left << setw(10) << "1." << left << setw(20) << "Pizza"      << right << setw(10) << "250" << "\n";
    cout << left << setw(10) << "2." << left << setw(20) << "Burger"     << right << setw(10) << "120" << "\n";
    cout << left << setw(10) << "3." << left << setw(20) << "Sandwich"   << right << setw(10) << "100" << "\n";
    cout << left << setw(10) << "4." << left << setw(20) << "Cold Drink" << right << setw(10) << "50"  << "\n";
    cout << left << setw(10) << "5." << left << setw(20) << "Coffee"     << right << setw(10) << "80"  << "\n";
    cout << "=========================================\n\n";

    // Accept item code from user
    cout << "Enter item code (1-5): ";
    cin >> choice;

    // Switch statement to set item name and price
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
            // Display message for invalid item code
            cout << "\nError: Invalid item code! Please choose between 1 and 5.\n";
            return 0; // Terminate program early on error
    }

    // Accept quantity from user
    cout << "Enter quantity: ";
    cin >> quantity;

    if (quantity <= 0) {
        cout << "\nError: Quantity must be greater than 0.\n";
        return 0;
    }

    // Calculate total amount
    totalAmount = price * quantity;

    // Display formatted final bill
    cout << fixed << setprecision(2);
    cout << "\n=========================================\n";
    cout << "               FINAL BILL                \n";
    cout << "=========================================\n";
    cout << left << setw(15) << "Item Name"  << ": " << itemName << "\n";
    cout << left << setw(15) << "Quantity"   << ": " << quantity << "\n";
    cout << left << setw(15) << "Unit Price" << ": Rs. " << price << "\n";
    cout << "-----------------------------------------\n";
    cout << left << setw(15) << "Total Amount"<< ": Rs. " << totalAmount << "\n";
    cout << "=========================================\n";

    return 0;
}