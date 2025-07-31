#include <iostream>
using namespace std;

// Function to double the value of an integer using a pointer
void doubleValue(int* p) {
    *p *= 2;
}

int main() {
    // Define an integer variable and take input
    int x;

    cin >> x;


    // Create a pointer to the integer variable
    int* ptr = &x;


    // Call the function to double the value of the integer using the pointer
    doubleValue(ptr);

    // Print the final value of the integer
    cout << x << endl;

    return 0;
}

