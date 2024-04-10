
#include <iostream>

using namespace std;

int main()
{
    double num1, num2, resultado;
    char opção;
    cout << "Digite o primeiro numero:\n";
    cin >> num1;
    cout << "Digite o segundo numero:\n";
    cin >> num2;
    
    cout << "*. Multiplicação" << endl;
    cout << "+. Soma" << endl;
    cout << "-. Subtração" << endl;
    cout << "/. Divisão" << endl;
    cout << "Digite sua opção: ";
    cin >> opção;

    switch (opção)
    {
        case '*':
        resultado = num1 *num2;
        cout << resultado;
        break;
        
        case '/':
        resultado = num1 / num2;
        cout << resultado;
        break;
        
        case '-':
        resultado = num1 - num2;
        cout << resultado;
        break;
        
        case '+':
        resultado = num1 + num2;
        cout << resultado;
        break;
        
        
    }

}
