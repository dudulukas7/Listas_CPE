
#include <iostream>

using namespace std;

int main()
{
    float a, b, c;
    cout << "Digite o valor de a: \n";
    cin >> a;
    cout << "Digite o valor de b: \n";
    cin >> b;
    cout << "Digite o valor de c: \n";
    cin >> c;

    if (a == b && b == c){
        cout << "o triangulo e equilatero";

    }
    else if (a == b && b !=c || a != b && b == c && a == c && c != b){
        cout << "o triangulo e isosceles";

    } else if (a != b && b != c){
        cout << "o tringulo e escaleno";

    }



}
