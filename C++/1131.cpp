#include <iostream>

using namespace std;

int main(){
    
    int a = 0, b = 0, inter = 0, gremio = 0, empates = 0, grenais = 0, escolha = 0;
    
    while(escolha != 2){
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> a >> b;
        
        if(a > b){
            inter++;
        }else if(b > a){
            gremio++;
        }else if(a == b){
            empates++;
        }
        grenais++;
        
        cin >> escolha;
    }
    
    cout << grenais << " grenais" << endl;
    cout << "Inter:" << inter << endl;
    cout << "Gremio:" << gremio << endl;
    cout << "Empates:" << empates << endl;
    
    if(inter > gremio){
        cout << "Inter venceu mais" << endl;
    }else if (gremio > inter){
        cout << "Gremio venceu mais" << endl;
    }else {
        cout << "Nao houve vencedor" << endl;
    }
    return 0;
}