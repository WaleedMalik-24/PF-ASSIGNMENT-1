#include <iostream>

using namespace std;

int main() {
    float userInput;
  // Get float input from the user
      cout << "Enter a floating-point number: ";
    cin >> userInput;
   // Convert the float to an integer
    int intValue = static_cast<int>(userInput);
// Print the integer value
    cout << "Converted integer value: " << intValue << endl;
    char character = 'Z';
    int asciiResult = intValue + character;
    // Print the result of adding the integer to the ASCII value of 'Z'
    cout << "Adding character '" << character << "' (ASCII value: " << static_cast<int>(character) 
         << ") to the integer gives: " << asciiResult << endl;
    cout << "Character corresponding to the result: '" << static_cast<char>(asciiResult) << "'" << endl;
    return 0;
}

