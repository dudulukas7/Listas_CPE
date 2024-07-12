#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

void cadastrarAluno() {
    string nome, matricula;
    cout << "Digite o nome do aluno: ";
    cin >> nome;
    cout << "Digite a matrícula do aluno: ";
    cin >> matricula;

    ofstream arquivo(nome + ".txt");
    if (arquivo.is_open()) {
        arquivo << matricula << endl;
        arquivo.close();
        cout << "Aluno cadastrado com sucesso!" << endl;
    } else {
        cout << "Erro ao cadastrar aluno." << endl;
    }
}

void adicionarNota() {
    string nome;
    double nota;
    cout << "Digite o nome do aluno: ";
    cin >> nome;
    cout << "Digite a nota do aluno: ";
    cin >> nota;

    ofstream arquivo(nome + ".txt", ios::app);
    if (arquivo.is_open()) {
        arquivo << nota << endl;
        arquivo.close();
        cout << "Nota adicionada com sucesso!" << endl;
    } else {
        cout << "Aluno não cadastrado." << endl;
    }
}

void calcularMedia() {
    string nome, linha;
    cout << "Digite o nome do aluno: ";
    cin >> nome;

    ifstream arquivo(nome + ".txt");
    if (arquivo.is_open()) {
        getline(arquivo, linha); // Ignorar a matrícula
        vector<double> notas;
        double nota;
        while (getline(arquivo, linha)) {
            stringstream ss(linha);
            ss >> nota;
            notas.push_back(nota);
        }
        arquivo.close();

        if (!notas.empty()) {
            double soma = 0;
            for (double n : notas) {
                soma += n;
            }
            double media = soma / notas.size();
            cout << "A média do aluno " << nome << " é " << media << endl;
        } else {
            cout << "Nenhuma nota encontrada para o aluno " << nome << endl;
        }
    } else {
        cout << "Aluno não cadastrado." << endl;
    }
}

int main() {
    int opcao;
    do {
        cout << "\nMenu:\n";
        cout << "1. Cadastrar aluno\n";
        cout << "2. Adicionar nota de um aluno\n";
        cout << "3. Calcular média de um aluno\n";
        cout << "4. Fechar o programa\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cadastrarAluno();
                break;
            case 2:
                adicionarNota();
                break;
            case 3:
                calcularMedia();
                break;
            case 4:
                cout << "Fechando o programa..." << endl;
                break;
            default:
                cout << "Opção inválida. Tente novamente." << endl;
        }
    } while (opcao != 4);

    return 0;
}
