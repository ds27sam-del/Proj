// Practical 11: Reverse of a Number
#include <iostream>
using namespace std;

// Function that accepts an integer and returns its reverse
int reverseNumber(int num) {
    int reversed = 0;

    while (num != 0) {
        int lastDigit = num % 10;
        reversed = (reversed * 10) + lastDigit; 
        num = num / 10;
    }

    return reversed;
}

int main() {
    int number;

    cout << "Enter an integer to reverse: ";
    cin >> number;

    int result = reverseNumber(number);

    cout << "Reversed number: " << result << endl;

    return 0;
}