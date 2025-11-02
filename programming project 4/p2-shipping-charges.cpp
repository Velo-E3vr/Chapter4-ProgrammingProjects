#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double pickRate(double weightKg) {
    if (weightKg <= 2.0) return 1.10;
    else if (weightKg <= 6.0) return 2.20;
    else if (weightKg <= 10.0) return 3.70;
    else return 4.80;   // up to 20 kg, already validated
}

int main() {
    double weight, distance;

    cout << "Enter package weight in kilograms (0 < w <= 20): ";
    if (!(cin >> weight) || weight <= 0.0 || weight > 20.0) {
        cout << "Error: weight must be greater than 0 and less than or equal to 20.\n";
        return 1;
    }

    cout << "Enter shipping distance in miles (10..3000): ";
    if (!(cin >> distance) || distance < 10.0 || distance > 3000.0) {
        cout << "Error: distance must be between 10 and 3000.\n";
        return 1;
    }

    double rate = pickRate(weight);
    int segments = static_cast<int>(ceil(distance / 500.0));
    double cost = rate * segments;

    cout << fixed << setprecision(2);
    cout << "Rate: $" << rate << " per 500 miles\n";
    cout << "Segments (ceil(distance/500)): " << segments << "\n";
    cout << "Total cost: $" << cost << "\n";

    return 0;
}
