// Exercícios de Subrotinas - Verify if a number is positive, negative, or zero
#include <iostream>
using namespace std;

void determineSign(int num) {
    // Function to determine if a number is positive, negative, or zero
    if (num > 0) {
        cout << "O número é positivo!";
    } else if (num < 0) {
        cout << "O número é negativo!";
    } else {
        // num == 0 
        cout << "O número é zero!";
    }
}


int main() {
    int num;

    cout << "Insira um número: ";
    cin >> num;
    
    determineSign(num);
    return 0;
    
    
}
