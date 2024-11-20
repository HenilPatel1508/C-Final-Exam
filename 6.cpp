#include <iostream>
#include <stdexcept> // For standard exceptions
using namespace std;

class Calculator {
public:
    // Method to perform division
    double divide(double numerator, double denominator) {
        if (denominator == 0) {
            throw runtime_error("Error: Division by zero is not allowed.");
        }
        return numerator / denominator;
    }
};

int main() {
    Calculator calc;
    double num, denom;

    cout << "Enter numerator: ";
    cin >> num;
    cout << "Enter denominator: ";
    cin >> denom;

    try {
        // Attempt division
        double result = calc.divide(num, denom);
        cout << "Result: " << result << endl;
    } catch (const runtime_error& e) {
        // Handle division by zero exception
        cout << e.what() << endl;
    }

    return 0;
}
