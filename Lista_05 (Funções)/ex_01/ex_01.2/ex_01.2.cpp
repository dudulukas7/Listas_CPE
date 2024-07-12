#include <iostream>
using namespace std;

float celsiusParaFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    cout << "Celsius para Fahrenheit \n";
    cout << "------------------- \n" ;

    for (int celsius = 0; celsius <= 100; celsius++) {
        float fahrenheit = celsiusParaFahrenheit(celsius);
        cout << celsius << "-----" << fahrenheit << endl;
    }

    return 0;
}

