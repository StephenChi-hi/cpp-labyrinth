// Functions

// Functions let you reuse logic, organize your code, and break complex problems into smaller, manageable pieces.
// Think of them as tools your program can call.

#include <iostream>
using namespace std;

// Basic Function Structure
// A simple function looks like this:

int add(int a, int b) {
    return a + b;
}

int main() {
    cout << add(3, 5); // output: 8
}

// Void Functions (no return)
// Functions that just do something:
void greet() {
    cout << "Hello from a function!" << endl;
}
// greet();



// Parameters vs Arguments
// Parameter → inside function definition
// Argument → value you pass in

void printName(string name) {   // name = parameter
    cout << "Hello " << name;
}
// printName("Chisom");             // "Chisom" = argument



// Default Parameters
// Give parameters automatic values:
int power(int base, int exp = 2) {
    return pow(base, exp);
}
// power(5);      // exp becomes 2 → 5² = 25
// power(5, 3);   // 5³ = 125




// Function Overloading
// Same function name, different parameters:
int area(int side) {
    return side * side;
}

int area(int w, int h) {
    return w * h;
}


