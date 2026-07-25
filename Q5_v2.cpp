#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    int choice, quantity;
    string itemName = "";
    float price = 0.0, totalAmount = 0.0;

    cout << "=============================\n";
    cout << "        Menu    Price        \n";
    cout << "=============================\n";
    cout << "1. Pizza        (250)\n";
    cout << "2. Burger       (120)\n";
    cout << "3. Sandwich     (100)\n";
    cout << "4. Cold Drink   (50)\n";
    cout << "5. Coffee       (80)\n";
    cout << "6. Done Ordering\n";
    cout << "=============================\n";

    do {
        cout << "\nEnter item code (1-6): ";
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
            case 6:
                cout << "Finalizing your order...\n";
                continue; 
            default:
                cout << "Invalid item code! Please try again.\n";
                continue; 
        }

        
        cout << "Enter quantity for " << itemName << ": ";
        cin >> quantity;

        if (quantity <= 0) {
            cout << "Invalid quantity! Item not added to bill.\n";
        } else {
            
            totalAmount += (price * quantity);
            cout << "Added " << quantity << " x " << itemName << " to your order.\n";
        }

    } while (choice != 6); 

    cout << "\n---------------------------------\n";
    cout << "           FINAL BILL            \n";
    cout << "---------------------------------\n";
    cout << left << setw(15) << "Total Amount" << ": Rs. " << totalAmount << "\n";
    cout << "---------------------------------\n";

    return 0;
}