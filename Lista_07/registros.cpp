#include <iostream>
#include <string>
using namespace std;

struct Livro {
    string titulo;
    int ano;
};

int main() {
    Livro livro;

    cout << "Digite o título do livro: ";
    getline(cin, livro.titulo);

    cout << "Digite o ano de publicação: ";
    cin >> livro.ano;

    cout << "Título do livro: " << livro.titulo << "\n";
    cout << "Ano de publicação: " << livro.ano << "\n";

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

struct Aluno {
    string nome;
    int idade;
    float nota;
};

int main() {
    Aluno alunos[3];

    for (int i = 0; i < 3; i++) {
        cout << "Digite as informações do aluno " << i + 1 << ":\n";
        cout << "Nome: ";
        cin.ignore();
        getline(cin, alunos[i].nome);
        cout << "Idade: ";
        cin >> alunos[i].idade;
        cout << "Nota: ";
        cin >> alunos[i].nota;
    }

    cout << "Informações dos alunos:\n";
    for (int i = 0; i < 3; i++) {
        cout << "Aluno " << i + 1 << ": Nome: " << alunos[i].nome << ", Idade: " << alunos[i].idade << ", Nota: " << alunos[i].nota << "\n";
    }

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

struct Data {
    int dia;
    int mes;
    int ano;
};

struct Funcionario {
    string nome;
    float salario;
    Data contratacao;
};

void ordenarFuncionarios(Funcionario funcionarios[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (funcionarios[j].salario < funcionarios[j + 1].salario) {
                Funcionario temp = funcionarios[j];
                funcionarios[j] = funcionarios[j + 1];
                funcionarios[j + 1] = temp;
            }
        }
    }
}

int main() {
    Funcionario funcionarios[2];

    for (int i = 0; i < 2; i++) {
        cout << "Digite as informações do funcionário " << i + 1 << ":\n";
        cout << "Nome: ";
        cin.ignore();
        getline(cin, funcionarios[i].nome);
        cout << "Salário: ";
        cin >> funcionarios[i].salario;
        cout << "Data de contratação (dd mm yyyy): ";
        cin >> funcionarios[i].contratacao.dia >> funcionarios[i].contratacao.mes >> funcionarios[i].contratacao.ano;
    }

    cout << "Informações dos funcionários:\n";
    for (int i = 0; i < 2; i++) {
        cout << "Funcionário " << i + 1 << ": Nome: " << funcionarios[i].nome << ", Salário: " << funcionarios[i].salario
             << ", Data de contratação: " << funcionarios[i].contratacao.dia << "/" << funcionarios[i].contratacao.mes
             << "/" << funcionarios[i].contratacao.ano << "\n";
    }

    ordenarFuncionarios(funcionarios, 2);

    cout << "\nInformações dos funcionários ordenadas pelo salário:\n";
    for (int i = 0; i < 2; i++) {
        cout << "Funcionário " << i + 1 << ": Nome: " << funcionarios[i].nome << ", Salário: " << funcionarios[i].salario
             << ", Data de contratação: " << funcionarios[i].contratacao.dia << "/" << funcionarios[i].contratacao.mes
             << "/" << funcionarios[i].contratacao.ano << "\n";
    }

    return 0;
}

