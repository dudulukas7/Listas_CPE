 #include <iostream>
using namespace std;

float conversao(float c){
    return (1.8*c + 32);
    
} 

int main() {
    float c;
    
    cout << "Digite a temperatura em Celsius: \n";
    cin >> c;
    
    cout << "A temperatura em Fahrenheit é: " << conversao(c);

    return 0;
}


