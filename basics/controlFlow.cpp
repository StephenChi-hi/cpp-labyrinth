#include <iostream>
using namespace std;

int main() {
    // If-Else
    
    int age = 20; 
    if (age>=18 ){
    cout << "Adult" << endl;
} else {
    cout << "Minor" << endl;
}


// Switch
// Better for multiple fixed choices:
char grade = 'B';
switch (grade) {
    case 'A': cout << "Excellent"; break;
    case 'B': cout << "Good"; break;
    case 'C': cout << "Average"; break;
    default:  cout << "Needs Improvement";
}

// Loops
// For Loop – repeat a known number of times:
for (int i = 1; i <= 5; i++) {
    cout << i << " ";
}

// While Loop – repeat while a condition is true:
int i = 1;
while (i <= 5) {
    cout << i << " ";
    i++;
}

// Do-While Loop – runs at least once:
int i = 1;
do {
    cout << i << " ";
    i++;
} while (i <= 5);

}

