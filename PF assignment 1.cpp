#include <iostream>
#include <string>

int main() {
    // Declare different data types
    int integer = 42;                // Integer
    float float1 = 3.14f;             // Floating point
    double double1 = 2.71828;         // Double precision floating point
    char char1 = 'A';                 // Character
    bool bool1 = true;                // Boolean

    // Display the values
    std::cout << "Integer: " << integer << std::endl;
    std::cout << "Float: " << float1 << std::endl;
    std::cout << "Double: " << double1 << std::endl;
    std::cout << "Character: " << char1 << std::endl;
    std::cout << "Boolean: " << (bool1 ? "true" : "false") << std::endl;

    return 0;
}

