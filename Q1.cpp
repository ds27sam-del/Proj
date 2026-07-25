#include <iostream>
using namespace std;
int main() {
    string name, course;
    int rollNumber, semester;
    float marks[5];
    float totalMarks = 0.0, percentage = 0.0;

    cout << "========================================\n";
    cout << "        ENTER STUDENT DETAILS          \n";
    cout << "========================================\n";

    cout << "Enter Student Name: ";
    cin >> name;

    cout << "Enter Roll Number: ";
    cin >> rollNumber;

    cout << "Enter student Course: ";
    cin >> course;

    cout << "Enter Semester: ";
    cin >> semester;

    cout << "\n--- Enter Marks for 5 Subjects (out of 100) ---\n";

    for (int i = 0; i < 5; i++) {
        cout << "Subject " << (i + 1) << ": ";
        cin >> marks[i];
        totalMarks += marks[i];
    }
    percentage = (totalMarks / 500.0) * 100;

    cout << "\n\n";
    cout << "=====================================================\n";
    cout << "                  ACADEMIC REPORT                    \n";
    cout << "=====================================================\n";
    
    cout << "Student Name:"<< "\t"<< name << "\n";
    cout << "Roll Number:"<< "\t"<< rollNumber << "\n";
    cout << "Course:"<< "\t"<< course << "\n";
    cout << "Semester:"<< "\t"<< semester << "\n";
    
    cout << "-----------------------------------------------------\n";
    cout << "Subject \t Marks Obtained" << "\n";
    cout << "-----------------------------------------------------\n";

    for (int i = 0; i < 5; i++) {
        cout << "Subject "  << (i + 1) << ":"<< "\t" ;
        cout << marks[i] << "\n";
    }

    cout << "-----------------------------------------------------\n";
    cout << "Total Marks:"  << totalMarks << " / 500.00\n";
    cout << "Percentage:"   << percentage << " %\n";
    
    cout  << "Status:";
    if (percentage >= 40.0) {
        cout << "PASSED\n";
    } else {
        cout << "FAILED\n";
    }
    cout << "=====================================================\n";

    return 0;
}