#include <iostream>
using namespace std;

int main() {
    int var = 10;
    int *ptr;

    ptr = &var;

    cout << "Valor inicial: " << var << "\n";

    *ptr = 20;

    cout << "Valor após alteração: " << var << "\n";

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int *array = new int[5];
    
    cout << "Digite 5 números: \n";
    for (int i = 0; i < 5; i++) {
        cin >> array[i];
    }
    
    cout << "Os valores do array são: ";
    for (int i = 0; i < 5; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";
    
    delete[] array;

    return 0;
}


#include <iostream>
using namespace std;

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    
    cout << "Digite dois números: ";
    cin >> a >> b;
    
    cout << "Valores antes da troca: a = " << a << ", b = " << b << "\n";
    
    trocar(&a, &b);
    
    cout << "Valores após a troca: a = " << a << ", b = " << b << "\n";
    
    return 0;
}
