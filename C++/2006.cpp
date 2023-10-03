#include <iostream>

using namespace std;

int main() {
 
    int tipo, opcao, i, corretos = 0;
    cin >> tipo;
    
    for(i = 0; i < 5; i++) {
        cin >> opcao;
        if(opcao == tipo) corretos++;
        
    }
    
    cout << corretos << endl;
    
    return 0;
}