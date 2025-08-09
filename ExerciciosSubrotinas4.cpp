// Exercícios de Subrotinas - Create a multiplication table for a given number
#include <iostream>
using namespace std;

void criarTabuada(int n)
{
    cout << endl;
    for (int x=0; x<=10; x++)
    {
        cout << n << "x" << x << ": ";
        cout << n*x << endl;
    }
    
}

int main()
{
    int n;
    
    cout << "Insira um número para ver sua tabuada: ";
    cin >> n;
    
    criarTabuada(n);
}
