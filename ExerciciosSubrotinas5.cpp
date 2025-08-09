// Exercícios de Subrotinas - Calculate base raised to the power of exponent
#include <iostream>
using namespace std;

int calc(int base, int expn) {
    // Function to calculate base raised to the power of expn
    int soma=base;

    if (expn == 0) { return 1; }
    
    for (int i=1; i<expn; i++) {
        soma *= base; // 2 * 2 = 4, 4 * 2 = 8
        //cout << soma;
    }
    return soma;
}

void read(string input, int &base, int &expn) {
    // Function to read base and exponent from the user
    cout << input;
    cin >> base >> expn;

}

int main()
{
    int base, expn;
    read("Insira a base e o expoente: ", base, expn);

    cout << "A potência de " << base << "^" << expn << " é: " << calc(base, expn) << endl;
    return 0;
    
}
