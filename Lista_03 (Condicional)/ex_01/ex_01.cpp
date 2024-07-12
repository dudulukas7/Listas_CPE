#include <iostream>

using namespace std;

int main()

{

    float km, litros, tanque;
    cout << "Digite a quantidade de kilometros: \n";
    cin >> km;
    cout << "Digite a quantidade de litros: \n";
    cin >> litros;

    tanque = km/litros;

    cout << "a quantidade de km por litros e: " << tanque << endl;
}
