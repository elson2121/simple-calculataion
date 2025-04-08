#include <iostream>
#include <stdexcept> // For exception handling

// Function to add two numbers
double add(double num1, double num2) {
    return num1 + num2;
}
// Function to subtract two numbers
double subtract(double num1, double num2) {
    return num1 - num2;
}

int main() {
    double num1, num2;
    char operation;
    double result;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    std::cout << "Enter operation (+, -, *, /): ";
    std::cin >> operation;

    try {
        switch (operation) {
            case '+':
                result = add(num1, num2);
                std::cout << num1 << " + " << num2 << " = " << result << std::endl;
                break;
            case '-':
                result = subtract(num1, num2);
                std::cout << num1 << " - " << num2 << " = " << result << std::endl;
                break;
            case '*':
                result = multiply(num1, num2);
                std::cout << num1 << " * " << num2 << " = " << result << std::endl;
                break;
            case '/':
                result = divide(num1, num2);
                std::cout << num1 << " / " << num2 << " = " << result << std::endl;
                break;
            default:
                std::cerr << "Error: Invalid operation." << std::endl;
                return 1; // Indicate an error
        }
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1; // Indicate an error
    }

    return 0; // Indicate successful execution
}