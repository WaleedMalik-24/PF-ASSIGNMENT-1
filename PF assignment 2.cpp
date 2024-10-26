#include <iostream>
#include <iomanip> // for std::setprecision

int main() {
    // Declare two integers
    int int1, int2;
    // Declare two floating-point numbers
    float float1, float2;
    // Get user input for integers
    std::cout << "Enter first integer: ";
    std::cin >> int1;
    std::cout << "Enter second integer: ";
    std::cin >> int2;
    // Get user input for floating-point numbers
    std::cout << "Enter first floating-point number: ";
    std::cin >> float1;
    std::cout << "Enter second floating-point number: ";
    std::cin >> float2;
    // Perform arithmetic operations
    int int_sum = int1 + int2;
    int int_diff = int1 - int2;
    int int_prod = int1 * int2;
    float int_quot = (int2 != 0) ? static_cast<float>(int1) / int2 : 0; // Avoid division by zero
    float float_sum = float1 + float2;
    float float_diff = float1 - float2;
    float float_prod = float1 * float2;
    float float_quot = (float2 != 0.0) ? float1 / float2 : 0.0; // Avoid division by zero
    std::cout << std::fixed << std::setprecision(2); // Set precision for floating-point output
    std::cout << "Integer Operations:" << std::endl;
    std::cout << "Addition: " << int_sum << std::endl;
    std::cout << "Subtraction: " << int_diff << std::endl;
    std::cout << "Multiplication: " << int_prod << std::endl;
    std::cout << "Division: " << (int2 != 0 ? int_quot : 0) << std::endl;
    std::cout << "\nFloating-Point Operations:" << std::endl;
    std::cout << "Addition: " << float_sum << std::endl;
    std::cout << "Subtraction: " << float_diff << std::endl;
    std::cout << "Multiplication: " << float_prod << std::endl;
    std::cout << "Division: " << (float2 != 0.0 ? float_quot : 0.0) << std::endl;

    return 0;
}

