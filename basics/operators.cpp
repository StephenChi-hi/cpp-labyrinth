#include <iostream>
using namespace std;

int main() {
// Arithmetic Operators
int a = 10, b = 3;
cout << a + b << endl;  // 13
cout << a - b << endl;  // 7
cout << a * b << endl;  // 30
cout << a / b << endl;  // 3 (integer division)
cout << a % b << endl;  // 1 (remainder)


// Comparison Operators
cout << (a == b) << endl;  // false (0)
cout << (a != b) << endl;  // true  (1)
cout << (a > b)  << endl;  // true
cout << (a <= b) << endl;  // false

// Logical Operators
bool x = true, y = false;
cout << (x && y) << endl;  // AND → false
cout << (x || y) << endl;  // OR  → true
cout << (!x) << endl;      // NOT → false

// Assignment Operators
int c = 5;
c += 3;  // c = c + 3 → 8
c *= 2;  // c = c * 2 → 16


//  Bitwise Operators (for deeper memory control later)

// Operate on bits (binary level):
// & (AND), | (OR), ^ (XOR), ~ (NOT), << (shift left), >> (shift right).

// A = 5 → 0101
// B = 3 → 0011

// Operator    Binary Result    Decimal
// -----------------------------------
// A & B       0101 & 0011     0001 → 1
// A | B       0101 | 0011     0111 → 7
// A ^ B       0101 ^ 0011     0110 → 6
// ~A          ~0101            1010 → -6* (two's complement)
// A << 1      0101 << 1       1010 → 10
// A >> 1      0101 >> 1       0010 → 2


}

