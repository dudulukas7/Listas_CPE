#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ifstream arquivoVetores("vetores.txt");
    ofstream arquivoSoma("soma.txt");

    if (!arquivoVetores.is_open() || !arquivoSoma.is_open()) {
        cout << "Não foi possível abrir os arquivos." << endl;
        return 1;
    }

    string linha;
    vector<int> soma;

    while (getline(arquivoVetores, linha)) {
        istringstream iss(linha);
        int numero;
        int i = 0;
        while (iss >> numero) {
            if (i >= soma.size()) {
                soma.push_back(numero);
            } else {
                soma[i] += numero;
            }
            i++;
        }
    }

    for (int valor : soma) {
        arquivoSoma << valor << " ";
    }

    arquivoVetores.close();
    arquivoSoma.close();

    return 0;
}

