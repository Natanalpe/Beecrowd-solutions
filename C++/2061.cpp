#include <iostream>

using namespace std;

int main(){
    int abas, acoes, i;
    string acao;
    cin >> abas >> acoes;
    
    for(i = 0; i < acoes; i++) {
        cin >> acao;
        if(acao[0] == 'f') abas++;
        else abas--;
    }
    cout << abas << endl;
    return 0;
}