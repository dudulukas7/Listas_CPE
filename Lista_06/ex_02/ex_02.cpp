#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    char caractere;
    string palavra;
    string linha;
    int numeroLinha = 1;
    
    ofstream arquivoS;
    arquivoS.open("Arquivo.txt");
    
    cout << "Digite a palavra: \n";
    cin >> palavra;
    arquivoS << palavra;
    arquivoS.close();
    
    cout << "Digite o caractere: \n";
    cin >> caractere;
    
    ifstream arquivoE;
    arquivoE.open("Arquivo.txt");
    
    if (arquivoE.is_open()) {
        while (getline(arquivoE, linha)) {
            int contador = 0;
            
            for (char c : linha) {
                if (c == caractere) {
                    contador++;
                }
            }
            cout << "Linha " << numeroLinha << ": " << contador << " ocorrências do caractere '" << caractere << "'" << endl;
            numeroLinha++;
        }
        arquivoE.close();
    }

    return 0;
}
