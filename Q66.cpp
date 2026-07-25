#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int TOTAL_STUDENTS = 20;
    int presentCount = 0;
    char status;

    cout << "=========================================\n";
    cout << "       STUDENT ATTENDANCE SYSTEM         \n";
    cout << "=========================================\n";
    cout << "Enter status for each student:\n";
    cout << "  'P' or 'p' = Present\n";
    cout << "  'A' or 'a' = Absent\n";
    cout << "-----------------------------------------\n\n";

    for (int i = 1; i <= TOTAL_STUDENTS; i++) {
        cout << "Student " << setw(2) << i << " Status (P/A): ";
        cin >> status;

        // Skip absent students using the 'continue' statement
        if (status == 'A' || status == 'a') {
            continue; 
        }

        // Count student if present
        if (status == 'P' || status == 'p') {
            presentCount++;
        } else {
            // Handle invalid inputs gracefully without affecting loop count
            cout << "  >> Invalid input! Please enter 'P' or 'A'.\n";
            i--; // Decrement counter so user can re-enter input for this student
        }
    }

    // Display Attendance Summary
    cout << "\n=========================================\n";
    cout << "           ATTENDANCE SUMMARY            \n";
    cout << "=========================================\n";
    cout << left << setw(22) << "Total Students"    << ": " << TOTAL_STUDENTS << "\n";
    cout << left << setw(22) << "Present Students"  << ": " << presentCount << "\n";
    cout << left << setw(22) << "Absent Students"   << ": " << (TOTAL_STUDENTS - presentCount) << "\n";
    cout << "=========================================\n";

    return 0;
}