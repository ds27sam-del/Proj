#include <iostream>
#include <string>
#include <iomanip>
#include <vector>

using namespace std;

// Structure to store ordered item details
struct OrderItem {
    string name;
    int quantity;
    float unitPrice;
    float itemTotal;
};

int main() {
    int choice, quantity;
    vector<OrderItem> cart;
    float grandTotal = 0.0;

    // Smart Formatted Menu Header
    cout << "===================================================\n";
    cout << "               SMART RESTAURANT MENU               \n";
    cout << "===================================================\n";
    cout << left << setw(8)  << "CODE" 
         << left << setw(20) << "ITEM NAME" 
         << right << setw(15) << "PRICE (Rs.)" << "\n";
    cout << "---------------------------------------------------\n";
    cout << left << setw(8)  << "[1]" << left << setw(20) << "Pizza"      << right << setw(15) << "250.00" << "\n";
    cout << left << setw(8)  << "[2]" << left << setw(20) << "Burger"     << right << setw(15) << "120.00" << "\n";
    cout << left << setw(8)  << "[3]" << left << setw(20) << "Sandwich"   << right << setw(15) << "100.00" << "\n";
    cout << left << setw(8)  << "[4]" << left << setw(20) << "Cold Drink" << right << setw(15) << "50.00"  << "\n";
    cout << left << setw(8)  << "[5]" << left << setw(20) << "Coffee"     << right << setw(15) << "80.00"  << "\n";
    cout << left << setw(8)  << "[6]" << left << setw(20) << "Finish & Generate Bill" << right << setw(15) << "-" << "\n";
    cout << "===================================================\n\n";

    // Ordering Loop
    do {
        cout << "Enter Item Code (1-6): ";
        cin >> choice;

        // Validate choice
        if (choice == 6) {
            break; // Exit loop to generate bill
        }

        string selectedName = "";
        float selectedPrice = 0.0;

        switch (choice) {
            case 1:
                selectedName = "Pizza";
                selectedPrice = 250.0;
                break;
            case 2:
                selectedName = "Burger";
                selectedPrice = 120.0;
                break;
            case 3:
                selectedName = "Sandwich";
                selectedPrice = 100.0;
                break;
            case 4:
                selectedName = "Cold Drink";
                selectedPrice = 50.0;
                break;
            case 5:
                selectedName = "Coffee";
                selectedPrice = 80.0;
                break;
            default:
                // Invalid choice handling
                cout << ">> ERROR: Invalid item code! Please enter a number between 1 and 6.\n\n";
                continue; // Re-prompt the user
        }

        // Get quantity
        cout << "Enter Quantity for " << selectedName << ": ";
        cin >> quantity;

        if (quantity <= 0) {
            cout << ">> ERROR: Quantity must be greater than 0. Item skipped.\n\n";
            continue;
        }

        // Add item to cart
        float lineTotal = selectedPrice * quantity;
        cart.push_back({selectedName, quantity, selectedPrice, lineTotal});
        grandTotal += lineTotal;

        cout << ">> Added: " << quantity << " x " << selectedName << " (Rs. " << lineTotal << ")\n\n";

    } while (true);

    // If no valid items were added
    if (cart.empty()) {
        cout << "\nNo items ordered. Order canceled.\n";
        return 0;
    }

    // Smart Formatted Bill / Receipt Output
    cout << "\n===================================================\n";
    cout << "                    FINAL BILL                     \n";
    cout << "===================================================\n";
    cout << fixed << setprecision(2);
    
    // Column Headers
    cout << left  << setw(16) << "ITEM NAME" 
         << right << setw(8)  << "QTY" 
         << right << setw(12) << "UNIT PRICE" 
         << right << setw(13) << "TOTAL" << "\n";
    cout << "---------------------------------------------------\n";

    // Display each item line
    for (const auto& item : cart) {
        cout << left  << setw(16) << item.name 
             << right << setw(8)  << item.quantity 
             << right << setw(12) << item.unitPrice 
             << right << setw(13) << item.itemTotal << "\n";
    }

    cout << "---------------------------------------------------\n";
    cout << left  << setw(36) << "GRAND TOTAL:" 
         << right << setw(13) << grandTotal << "\n";
    cout << "===================================================\n";
    cout << "        Thank you for dining with us!              \n";
    cout << "===================================================\n";

    return 0;
}