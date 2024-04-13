#include <iostream>
using namespace std;
int main()
{
    int c, n, m;
    cout << "Digite um número inteiro não negativo: \n";
    cin >> n;
    c = n;
    m = 1;
    while (c > 0){
        m = m * c;
        c = c - 1;
        
    }
    cout << "o fatorial é igual a: " << m;
    return 0;
}