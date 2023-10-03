#include <iostream>

using namespace std;

int main() {
    
    string l;
    
    while(cin >> l) {
        cout << (l == "xxL" ? "Esse eh o meu lugar" : "Oi, Leonard") << endl;
    }
    
    return 0;
}