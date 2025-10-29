#include <iostream>
using namespace std;

// Determines if a given year is a leap year
bool isLeapYear(int year) {
    if (year % 400 == 0) return true;
    if (year % 100 == 0) return false;
    return (year % 4 == 0);
}

int main() {
    int month, year;

    cout << "Enter a month (1–12): ";
    if (!(cin >> month)) {
        cout << "Error: month must be an integer.\n";
        return 1;
    }

    if (month < 1 || month > 12) {
        cout << "Error: month must be between 1 and 12.\n";
        return 1;
    }

    cout << "Enter a year (> 0): ";
    if (!(cin >> year)) {
        cout << "Error: year must be an integer.\n";
        return 1;
    }

    if (year <= 0) {
        cout << "Error: year must be greater than 0.\n";
        return 1;
    }

    bool leap = isLeapYear(year);
    int days = 0;

    // Determine the number of days in the month
    switch (month) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        days = 31;
        break;
    case 4: case 6: case 9: case 11:
        days = 30;
        break;
    case 2:
        days = leap ? 29 : 28;
        break;
    default:
        cout << "Unexpected error.\n";
        return 1;
    }

    cout << days << " days\n";
    return 0;
}
