#include <iostream>
using namespace std;

// Inline function: Celsius to Fahrenheit
inline double celsiusToFahrenheit(double c) {
    return (c * 9.0 / 5.0) + 32.0;
}

// Inline function: Fahrenheit to Celsius
inline double fahrenheitToCelsius(double f) {
    return (f - 32.0) * 5.0 / 9.0;
}

int main() {
    double temp, result;
    int choice;

    cout << "Temperature Converter" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if(choice == 1) {
        cout << "Enter temperature in Celsius: ";
        cin >> temp;
        result = celsiusToFahrenheit(temp); // inline call
        cout << temp << " C = " << result << " F" << endl;
    }
    else if(choice == 2) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;
        result = fahrenheitToCelsius(temp); // inline call
        cout << temp << " F = " << result << " C" << endl;
    }
    else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}