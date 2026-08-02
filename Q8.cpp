// Practical 8: Function With Arguments and Without Return Value
#include <iostream>
using namespace std;

void rec(int a, int b) {
    cout << "===================================\n";
    cout << "     Result of 4 calculations      \n";
    cout << "===================================\n";
    cout << "Sum       \t" << a + b << "\n";
    cout << "Difference\t" << a - b << "\n";
    cout << "Product   \t" << a * b << "\n";
    cout << "Quotient  \t" << a / b << "\n";
    cout << "===================================\n";
}

int main() {
    int a, b;
    cout << "Enter the first value: ";
    cin >> a;

    cout << "Enter the second value: ";
    cin >> b;

    rec(a, b);

    return 0;
}