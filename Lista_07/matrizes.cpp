

#include <iostream>
using namespace std;

int main()
{
    int vet [3][3];
    int vetTrans [3][3];
    int i, j;
    int soma = 0;
    
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            cin >> vet[i][j];
            soma = soma + vet[i][j];
            
        }
    }
    cout << "Matriz: \n";
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            cout << vet[i][j] << " ";
        }
    cout << "\n";
    }
    
    cout << "Matriz transposta: \n";
    for (j=0; j<3; j++){
        for (i=0; i<3; i++){
            cout << vet[i][j] << " ";
        }
    cout << "\n";
    }
    //cout << "A soma dos elementos é igual a: " << soma << endl;
    return 0;
}