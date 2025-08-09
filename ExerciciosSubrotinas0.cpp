// Exercícios de Subrotinas - Verify if a number is positive or negative
#include <iostream>
using namespace std;

int verify(int value) {
    // Function to verify if a number is positive or negative
    if (value < 0) {
        return 0; 
    } else {
        return 1; 
    }
}

void read(int &value) {
    // Function to read a value from the user
    cout << "Insira um valor: ";
    cin >> value; // Read the input value
}

int main() {
    int value; 

    // Call the read function to get the value from the user
    read(value); 

    // Verify if the value is positive or negative
    if (verify(value) == 0) {
        cout << "O valor é negativo!" << endl; 
    } else {
        cout << "O valor é positivo!" << endl;
    }

    return 0;
}
