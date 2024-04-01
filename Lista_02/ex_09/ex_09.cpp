#include <iostream>
using namespace std;

int main()
{
    float km, custo;
    cout << "Quantos kilometros você percorreu?: \n";
    cin >> km;
    
    if(km <= 50) {
       custo = km * 1.75;
       cout << "O custo é de: " << custo << endl;
      
    }
    
    else if (km > 50 && km < 150) { 
        custo = km * 1.65;
        cout << "o custo é: " << custo << endl;
        
    }
    
    else if (km >= 150) {
        custo = km * 1.50;
        cout << "o custo é: " << custo << endl; 
        
    }
}