#include <iostream>

using namespace std;

int main(){
    
    int n, senha = 2002, i;
    
    while(cin >> n) {
        if(n == 2002) {
            cout << "Acesso Permitido" << endl;
            break;
        }
        cout << "Senha Invalida" << endl;
    }

    return 0;
}