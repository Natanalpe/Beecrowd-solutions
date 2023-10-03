#include <iostream>

using namespace std;

int main() {
    
    string tabuleiro;
    cin >> tabuleiro;
    
    if((tabuleiro == "XXO") || (tabuleiro == "OXX"))
        cout << "Alice";
    else if (tabuleiro == "XOX")
        cout << "*";
    else
        cout << "?";
    cout << endl;
    
    return 0;
}