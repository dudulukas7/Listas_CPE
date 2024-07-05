/*
#include <boost/algorithm/string.hpp>
#include <iostream>
using namespace std; 
using namespace boost::algorithm;
int main()
{   

    string palavra1, palavra2;
    
    cout << "Digite a primeira palavra: \n";
    cin >> palavra1;
    
    cout << "Digite a segunda palavra: \n";
    cin >> palavra2;
    
    to_lower(palavra1);
    to_lower(palavra2);
    
    if (palavra1 == palavra2){
        cout << "As palavras são iguais!! \n"; 
    }else{
        cout << "As palavras são diferentes!! \n";
    }


    return 0;
    
}
    */
    


/*
#include <iostream>
#include <string>
using namespace std; 

int main()
{
    string palavra;
    
    cout << "Digite a palavra: \n";
    
    getline (cin, palavra);
    cout << "o tamanho da palavra é: " << palavra.length() << "\n";

    return 0;
} */
/*
#include <boost/algorithm/string.hpp>
#include <iostream>
using namespace std; 
using namespace boost::algorithm;
int main(){
    
    string palavra;
    int contagem = 0;
    
    cout << "Digite a palavra: \n";
    getline(cin, palavra);
    
    for (char c : palavra){
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'||c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
            contagem++;
        }
    }
    cout << "O número de vogais na frase é: " << contagem << "\n";

}
*/
*/*
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s;

    cout << "Digite uma string: ";
    getline(cin, s);

    reverse(s.begin(), s.end());
    cout << s << endl;

    return 0;
}
*/