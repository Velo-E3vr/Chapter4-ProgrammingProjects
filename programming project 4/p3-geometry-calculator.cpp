#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double PI = 3.14159;
    int choice;

    cout << "Geometry Calculator\n"
        << "  1. Calculate the Area of a Circle\n"
        << "  2. Calculate the Area of a Rectangle\n"
        << "  3. Calculate the Area of a Triangle\n"
        << "  4. Quit\n"
        << "Enter your choice (1–4): ";

    if (!(cin >> choice) || choice < 1 || choice > 4) {
        cout << "Error: choice must be between 1 and 4.\n";
        return 1;
    }

    cout << fixed << setprecision(4);

    if (choice == 1) {
        double radius;
        cout << "Enter radius (>= 0): ";
        if (!(cin >> radius) || radius < 0) {
            cout << "Error: radius must be non-negative.\n";
            return 1;
        }
        cout << "Area of circle = " << PI * radius * radius << "\n";

    }
    else if (choice == 2) {
        double length, width;
        cout << "Enter length (>= 0): ";
        if (!(cin >> length) || length < 0) {
            cout << "Error: length must be non-negative.\n";
            return 1;
        }
        cout << "Enter width (>= 0): ";
        if (!(cin >> width) || width < 0) {
            cout << "Error: width must be non-negative.\n";
            return 1;
        }
        cout << "Area of rectangle = " << (length * width) << "\n";

    }
    else if (choice == 3) {
        double base, height;
        cout << "Enter base (>= 0): ";
        if (!(cin >> base) || base < 0) {
            cout << "Error: base must be non-negative.\n";
            return 1;
        }
        cout << "Enter height (>= 0): ";
        if (!(cin >> height) || height < 0) {
            cout << "Error: height must be non-negative.\n";
            return 1;
        }
        cout << "Area of triangle = " << (0.5 * base * height) << "\n";

    }
    else {
        cout << "Goodbye.\n";
    }

    return 0;
}
