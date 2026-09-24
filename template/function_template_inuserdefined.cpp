#include <iostream>
#include <string>

// Define a function template with a single type parameter T
template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    // 1. Using the template with integers (Explicit type specification)
    int intResult = findMax<int>(10, 20);
    std::cout << "Max of 10 and 20 (int): " << intResult << std::endl;

    // 2. Using the template with doubles (Implicit type deduction)
    double doubleResult = findMax(5.5, 3.14);
    std::cout << "Max of 5.5 and 3.14 (double): " << doubleResult << std::endl;

    // 3. Using the template with characters
    char charResult = findMax('A', 'Z');
    std::cout << "Max of 'A' and 'Z' (char): " << charResult << std::endl;

    // 4. Using the template with strings
    std::string str1 = "Apple";
    std::string str2 = "Banana";
    std::string strResult = findMax(str1, str2);
    std::cout << "Max of 'Apple' and 'Banana' (string): " << strResult << std::endl;

    return 0;
}
