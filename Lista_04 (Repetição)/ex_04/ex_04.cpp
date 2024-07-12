#include <iostream>

using namespace std;

int main() {

    float precoProduto1 = 2.98;
    float precoProduto2 = 4.50;
    float precoProduto3 = 9.98;
    float precoProduto4 = 4.49;
    float precoProduto5 = 6.87;

    int numeroProduto;
    int quantidadeVendida;
    float totalVenda = 0.0;


    while (true) {
        cout << "Digite o número do produto (1-5) ou 0 para encerrar: ";
        cin >> numeroProduto;


        if (numeroProduto == 0)
            break;


        switch (numeroProduto) {
            case 1:
                cout << "Digite a quantidade vendida do Produto 1: ";
                cin >> quantidadeVendida;
                totalVenda += precoProduto1 * quantidadeVendida;
                break;
            case 2:
                cout << "Digite a quantidade vendida do Produto 2: ";
                cin >> quantidadeVendida;
                totalVenda += precoProduto2 * quantidadeVendida;
                break;
            case 3:
                cout << "Digite a quantidade vendida do Produto 3: ";
                cin >> quantidadeVendida;
                totalVenda += precoProduto3 * quantidadeVendida;
                break;
            case 4:
                cout << "Digite a quantidade vendida do Produto 4: ";
                cin >> quantidadeVendida;
                totalVenda += precoProduto4 * quantidadeVendida;
                break;
            case 5:
                cout << "Digite a quantidade vendida do Produto 5: ";
                cin >> quantidadeVendida;
                totalVenda += precoProduto5 * quantidadeVendida;
                break;
            default:
                cout << "Número de produto inválido. Tente novamente.\n";
        }
    }


    cout << "O valor total é: R$ " << totalVenda << endl;

    return 0;
}