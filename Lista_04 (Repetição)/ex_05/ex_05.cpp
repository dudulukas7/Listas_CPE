#include <iostream>

using namespace std;

int main() {
    const int minimoValor = 1;
    const int maximoValor = 30;

    int numero;

    cout << "Digite cinco números entre 1 e 30:\n";

    for (int i = 0; i < 5; ++i) {
        cout << "Número " << i + 1 << ": ";
        cin >> numero;
        
        cout << "Barras de asteriscos para o número " << numero << ":\n";
        for (int j = 0; j < numero; ++j) {
            cout << "*";
        }
        cout << endl;
    }

}
