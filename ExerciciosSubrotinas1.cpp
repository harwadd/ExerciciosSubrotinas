// Exercícios de Subrotinas - Verify if a number is even or odd
#include <iostream>
using namespace std;

void printEvenOdd(int value) {
    // Function to check if a number is even or odd
    if (value % 2 == 0) {
        cout << "O número é par!" << endl;
    } else {
        cout << "O número é ímpar!" << endl;
    }
}

int main() {
    int value = 4; // Example value
    printEvenOdd(value);
    return 0;
}
