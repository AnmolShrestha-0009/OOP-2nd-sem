#include <iostream>

class Temperature {
private:
    double celsius;

public:
    Temperature(double c) : celsius(c) {}

    operator double() const {
        return celsius;
    }
};

int main() {
    Temperature tempObj(37.0);
    double basicCelsius = tempObj;
    std::cout << "The basic double value is: " << basicCelsius << "\n";
    return 0;
}
