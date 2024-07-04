#include <iostream>
#include <string>

using namespace std;

int main() {
    string texto;
    char caractere;

    // Solicita ao usuário para digitar uma string
    cout << "Digite uma string: ";
    getline(cin, texto);

    // Solicita ao usuário para digitar um caractere
    cout << "Digite um caractere para buscar: ";
    cin >> caractere;

    // Busca o caractere na string
    size_t pos = texto.find(caractere);

    // Verifica se o caractere foi encontrado
    if (pos != string::npos) {
        cout << "O caractere '" << caractere << "' foi encontrado na posição " << pos << "." << endl;
    } else {
        cout << "O caractere '" << caractere << "' não foi encontrado na string." << endl;
    }

    return 0;
}
