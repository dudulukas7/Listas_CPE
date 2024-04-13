#include <iostream>
using namespace std;

int main() {

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < i + 1; ++j) {
            cout << '*';
        }
        cout << '\n';
    }
    cout << '\n';
    
    for (int i = 10; i > 0; --i) {
        for (int j = 0; j < i; ++j) {
            cout << '*';
        }
        cout << '\n';
    }
    cout << '\n';
    
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < i; ++j) {
            cout << ' ';
        }
        for (int j = 10; j > i; --j) {
            cout << '*';
        }
        cout << '\n';
    }
    cout << '\n';

 for (int i = 0; i < 10; ++i) {
        for (int j = 10; j > i + 1; --j) {
            cout << ' ';
        }
        for (int j = 0; j < i + 1; ++j) {
            cout << '*';
        }
        cout << '\n';
    }
}


