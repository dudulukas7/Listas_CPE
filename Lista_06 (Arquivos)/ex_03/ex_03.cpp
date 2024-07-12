#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    double peso, altura;
    string codigo;
    char continuar = 's';
    
    ofstream arquivoAltura;
    arquivoAltura.open("altura.txt");
    
    ofstream arquivoPeso;
    arquivoPeso.open("peso.txt");
    
    while (continuar == 's'){
        cout << "Digite o código de verificação: \n";
        cin >> codigo;
        arquivoAltura << codigo << endl;
        arquivoPeso << codigo << endl;
    
        cout << "Digite sua altura em metros: \n";
        cin>> altura;
        arquivoAltura << altura << endl;
    
        cout << "Digite seu peso em kilogramas: \n";
        cin >> peso;
        arquivoPeso << peso << endl;
    
        cout << "Deseja inserir outro paciente? (s/n): \n";
        cin >> continuar;
    }
    arquivoAltura.close();
    arquivoPeso.close();
    
    ifstream arquivoAlturaLeitura("altura.txt");
    ifstream arquivoPesoLeitura("peso.txt");
    
    string linha;
    string maiorAlturaCodigo, maiorPesoCodigo;
    double  maiorPeso, maiorAltura;


    while (getline(arquivoAlturaLeitura, linha)) {
        codigo = linha;
        if (getline(arquivoAlturaLeitura, linha)) {
            altura = stod(linha);
            if (altura > maiorAltura) {
                maiorAltura = altura;
                maiorAlturaCodigo = codigo;
            }
        }
    }

    while (getline(arquivoPesoLeitura, linha)) {
        codigo = linha;
        if (getline(arquivoPesoLeitura, linha)) {
            peso = stod(linha);
            if (peso > maiorPeso) {
                maiorPeso = peso;
                maiorPesoCodigo = codigo;
            }
        }
    }

    arquivoAlturaLeitura.close();
    arquivoPesoLeitura.close();

    cout << "Pessoa com maior altura: " << maiorAlturaCodigo << " com " << maiorAltura << " metros" << endl;
    cout << "Pessoa com maior peso: " << maiorPesoCodigo << " com " << maiorPeso << " kg" << endl;

    
    

    return 0;
}