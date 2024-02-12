#include <iostream>
int main() {
    char operation;
    double num1, num2, result;
    // Get user input for operation and two numbers
    std::cout << "Enter an operation (+, -, *, /): ";
    std::cin >> operation;
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;
    // Perform the selected operation
    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                std::cerr << "Error: Division by zero is undefined." << std::endl;
                return 1; 
            }
            break;
        default:
            std::cerr << "Error: Invalid operation." << std::endl;
            return 1; 
    }
    std::cout << "Result: " << result << std::endl; // Results are shown
    return 0;
}
