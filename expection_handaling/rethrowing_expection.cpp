#include <iostream>
#include <cmath>
#include <stdexcept>

using namespace std;

double calculateSqrt(double value) {
    if (value < 0) {
        throw invalid_argument("Cannot calculate square root of a negative number.");
    }
    return sqrt(value);
}

double calculateGmean(double a, double b) {
    try {
        double product = a * b;
        return calculateSqrt(product);
    }
    catch (const invalid_argument& e) {
        cout << "[gmean Log] Error detected during geometric mean processing.\n";
        throw;
    }
}

int main() {
    double pairs[][2] = {
        {4.0, 9.0},
        {-2.0, 8.0},
        {-3.0, -3.0}
    };

    for (const auto& pair : pairs) {
        double x = pair[0];
        double y = pair[1];

        try {
            cout << "Calculating gmean for (" << x << ", " << y << ")...\n";
            double result = calculateGmean(x, y);
            cout << "Result: " << result << "\n\n";
        }
        catch (const invalid_argument& e) {
            cout << "[Main Alert] Handled exception: " << e.what() << "\n\n";
        }
    }

    return 0;
}

