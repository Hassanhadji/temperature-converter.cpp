#include <iostream>
#include <iomanip> // for setprecision
using namespace std;

int main() {
    int choice;
    double temp, result;

    cout << "Temperature Converter\n";
    cout << "----------------------\n";
    cout << "Choose a conversion option:\n";
    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    cout << fixed << setprecision(2);

    if (choice == 1) {
        cout << "\nEnter temperature in Celsius: ";
        cin >> temp;
        result = (temp * 9.0 / 5.0) + 32.0;
        cout << temp << "°C is equal to " << result << "°F\n";
    }
    else if (choice == 2) {
        cout << "\nEnter temperature in Fahrenheit: ";
        cin >> temp;
        result = (temp - 32.0) * 5.0 / 9.0;
        cout << temp << "°F is equal to " << result << "°C\n";
    }
    else {
        cout << "\nInvalid choice! Please run the program again and enter 1 or 2.\n";
    }

    return 0;
}
