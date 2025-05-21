
#include <iostream>
using namespace std;

int main() {
    int marks;
    char grade;

    // Input marks
    cout << "Enter your marks (0-100): ";
    cin >> marks;

    // Check for valid input
    if (marks < 0 || marks > 100) {
        cout << "Invalid marks. Please enter a value between 0 and 100." << endl;
        return 1;
    }

    // Determine grade using if-else
    if (marks >= 90)
        grade = 'A';
    else if (marks >= 75)
        grade = 'B';
    else if (marks >= 60)
        grade = 'C';
    else if (marks >= 40)
        grade = 'D';
    else
        grade = 'F';

    // Output grade
    cout << "Your grade is: " << grade << endl;

    return 0;
}
