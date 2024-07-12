
#include <iostream>
using namespace std;

int main()
{
    char tentativa;
    cout << "Digite uma vogal\n";
    cin >> tentativa;
    
    switch (tentativa)
    {
        
        case  'a':
        cout << "A vogal digitada é a";
        break;
        
        case 'e':
        cout << "A vogal digitada é e";
        break;
        
        case 'i':
        cout << "A vogal digitada é i";
        break;
        
        case 'o':
        cout << "A vogal digitada é o";
        break;
        
        case 'u':
        cout << "A vogal digitada é u";
        break;
        
        default:
        cout << "nao valido";
        break;
 
    }
    return 0;
}
