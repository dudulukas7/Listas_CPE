#include <iostream>

using namespace std;

int main()
{
    float alcool, gasolina, div;
    cout << "Digite o valor do alcool: \n";
    cin >> alcool;
    cout << "Digite o valor da gasolina: \n";
    cin >> gasolina;
    div = alcool/gasolina;
    cout << div << endl;

    if (div <= 0.7){
        cout << "Abastecer com alcool!!";

    } else {
    cout << "Abastecer com gasolina!!";

    }
}
