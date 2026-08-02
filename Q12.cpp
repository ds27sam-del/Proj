// Practical 12: Electricity Bill (Indian Slab Rates)
#include <iostream>
using namespace std;

float calculate_bill(int units) {
    float bill;

    if (units <= 100) {
        bill = units * 3.50;
    } 
    else if (units <= 300) {
        // First 100 @ 3.50 + remaining @ 6.00
        bill = (100 * 3.50) + ((units - 100) * 6.00);
    } 
    else if (units <= 500) {
        // First 100 @ 3.50 + Next 200 @ 6.00 + remaining @ 8.50
        bill = (100 * 3.50) + (200 * 6.00) + ((units - 300) * 8.50);
    } 
    else {
        // First 100 @ 3.50 + Next 200 @ 6.00 + Next 200 @ 8.50 + remaining @ 10.00
        bill = (100 * 3.50) + (200 * 6.00) + (200 * 8.50) + ((units - 500) * 10.00);
    }

    return bill; // ✅ Handles return for all cases
}

int main() {
    int units;
    float bill;

    cout << "Enter total electricity units consumed: ";
    cin >> units;

    bill = calculate_bill(units);

    cout << "The bill is: ₹" << bill << endl;

    return 0;
}