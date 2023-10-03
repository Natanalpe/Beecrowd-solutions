#include <iostream>

using namespace std;

int main() {
    string n, r = " NO";
    int i;
    cin >> n;
    
    for(i = 0; i < (n.size()); i++) {
        if(n[i] == '1' && n[i + 1] == '3') {
            r = "";
            break;
        }
    }
    cout << n << r << " es de Mala Suerte" << endl;
    return 0;
}