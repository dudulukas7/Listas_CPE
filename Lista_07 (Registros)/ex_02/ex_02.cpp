#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <set>
#include <sstream>
#include <algorithm>

using namespace std;

struct Ramal {
    int numero;
    int categoria;
    string setor;
    int edificio;
    string sala;
    string responsavelRamal;
    string responsavelAteste;
};

vector<Ramal> ramais;

// Função para carregar os ramais do arquivo
void carregarRamais() {
    ifstream arquivo("ramais.txt");
    if (arquivo.is_open()) {
        string linha;
        while (getline(arquivo, linha)) {
            stringstream ss(linha);
            Ramal r;
            ss >> r.numero >> r.categoria >> r.setor >> r.edificio >> r.sala >> r.responsavelRamal >> r.responsavelAteste;
            ramais.push_back(r);
        }
        arquivo.close();
    }
}

// Função para salvar os ramais no arquivo
void salvarRamais() {
    ofstream arquivo("ramais.txt");
    for (const auto& r : ramais) {
        arquivo << r.numero << " " << r.categoria << " " << r.setor << " " << r.edificio << " " << r.sala << " " << r.responsavelRamal << " " << r.responsavelAteste << endl;
    }
    arquivo.close();
}

// Função para cadastrar um novo ramal
void cadastrarRamal() {
    Ramal r;
    cout << "Digite o número do ramal (1000-2999): ";
    cin >> r.numero;

    // Verifica se o ramal já existe
    for (const auto& ramal : ramais) {
        if (ramal.numero == r.numero) {
            cout << "Ramal já cadastrado!" << endl;
            return;
        }
    }

    cout << "Digite a categoria (0-6): ";
    cin >> r.categoria;
    cout << "Digite o setor: ";
    cin >> r.setor;
    cout << "Digite o código do edifício (500 ou 505): ";
    cin >> r.edificio;
    cout << "Digite a sala: ";
    cin >> r.sala;
    cout << "Digite o primeiro nome do responsável pelo ramal: ";
    cin >> r.responsavelRamal;
    cout << "Digite o primeiro nome do responsável pelo ateste: ";
    cin >> r.responsavelAteste;

    ramais.push_back(r);
    salvarRamais();
}

// Função para listar os setores disponíveis
void listarSetores() {
    set<string> setores;
    for (const auto& r : ramais) {
        setores.insert(r.setor);
    }

    int i = 1;
    for (const auto& setor : setores) {
        cout << i++ << ". " << setor << endl;
    }
}

// Função para pesquisar por setor
void pesquisarPorSetor() {
    listarSetores();
    string setorEscolhido;
    cout << "Digite o setor desejado: ";
    cin >> setorEscolhido;

    for (const auto& r : ramais) {
        if (r.setor == setorEscolhido) {
            cout << "Ramal: " << r.numero << ", Categoria: " << r.categoria << ", Edifício: " << r.edificio
                 << ", Sala: " << r.sala << ", Responsável pelo Ramal: " << r.responsavelRamal
                 << ", Responsável pelo Ateste: " << r.responsavelAteste << endl;
        }
    }
}

// Função para listar os responsáveis pelo ramal
void listarResponsaveisRamal() {
    set<string> responsaveis;
    for (const auto& r : ramais) {
        responsaveis.insert(r.responsavelRamal);
    }

    int i = 1;
    for (const auto& responsavel : responsaveis) {
        cout << i++ << ". " << responsavel << endl;
    }
}

// Função para pesquisar por responsável pelo ramal
void pesquisarPorResponsavelRamal() {
    listarResponsaveisRamal();
    string responsavelEscolhido;
    cout << "Digite o nome do responsável pelo ramal desejado: ";
    cin >> responsavelEscolhido;

    for (const auto& r : ramais) {
        if (r.responsavelRamal == responsavelEscolhido) {
            cout << "Ramal: " << r.numero << ", Categoria: " << r.categoria << ", Setor: " << r.setor
                 << ", Edifício: " << r.edificio << ", Sala: " << r.sala << ", Responsável pelo Ateste: " << r.responsavelAteste << endl;
        }
    }
}

// Função para exibir o menu de pesquisa
void menuPesquisa() {
    int opcao;
    do {
        cout << "\nMétodos de Pesquisa:\n";
        cout << "1. Pesquisar por setor\n";
        cout << "2. Pesquisar por responsável pelo ramal\n";
        cout << "3. Voltar ao menu principal\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                pesquisarPorSetor();
                break;
            case 2:
                pesquisarPorResponsavelRamal();
                break;
            case 3:
                cout << "Voltando ao menu principal..." << endl;
                break;
            default:
                cout << "Opção inválida. Tente novamente." << endl;
        }
    } while (opcao != 3);
}

// Função principal
int main() {
    carregarRamais();
    int opcao;
    do {
        cout << "\nMenu Principal:\n";
        cout << "1. Cadastrar ramal\n";
        cout << "2. Pesquisar ramal\n";
        cout << "3. Fechar o programa\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cadastrarRamal();
                break;
            case 2:
                menuPesquisa();
                break;
            case 3:
                cout << "Fechando o programa..." << endl;
                break;
            default:
                cout << "Opção inválida. Tente novamente." << endl;
        }
    } while (opcao != 3);

    return 0;
}
