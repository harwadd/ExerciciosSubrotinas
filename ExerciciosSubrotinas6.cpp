// Exercícios de Subrotinas - Fibonacci Sequence (20 terms)
#include <iostream>
using namespace std;

void Fibonacci() {
    // Function to print terms of the Fibonacci sequence
    int primeiroTermo = 1;
    int segundoTermo = 1;
    int proximoTermo;
    
    cout << "1\n1\n";
    
    for (int i = 1; i <= 18; i++) {
        proximoTermo = primeiroTermo + segundoTermo;
        cout << proximoTermo << endl;
    
        primeiroTermo = segundoTermo;
        segundoTermo = proximoTermo;
    }
    
}

int main() {
    Fibonacci();
    return 0;
}
