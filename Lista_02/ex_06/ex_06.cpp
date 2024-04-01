 #include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cout << "Digite o primeiro valor: \n";
    cin >> n1;
    cout << "Digite o segundo valor: \n";
    cin >> n2;
    
    if (n1 % n2 == 0) {
        cout << "Os números são múltiplos" << endl;
    } else {
        cout << "Os números não são múltiplos" << endl;
    }

    return 0;
}