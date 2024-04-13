#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    cout << "Pense em um número entre 1 e 100.\n";

    int limiteInferior = 1;
    int limiteSuperior = 100;
    int palpite;
    char resposta;

    for (int i = 1; i <= 7; ++i) {
        palpite = limiteInferior + (rand() % (limiteSuperior - limiteInferior + 1)); 

        cout << "O número em que você está pensando é menor que " << palpite << "? (s/n): ";
        cin >> resposta;

        if (resposta == 's') {
            limiteSuperior = palpite - 1;
        } else {
            limiteInferior = palpite;
        }

        if (limiteInferior == limiteSuperior) {
            cout << "O número em que você está pensando é: " << limiteInferior << endl;
            break;
        }
    }

    return 0;
}