
#include<iostream>
using namespace std;
int main()
{
    string senha, tentativa;
    senha = "1234";
    cout << "Digite a senha: \n";
    cin >> tentativa;
    
    if (tentativa == senha){
    cout << "acesso permitido";
    } else {
    cout << "acesso negado";
    }
    
    
}