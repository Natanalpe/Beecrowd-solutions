#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int main(){
    
    bool upp, low, num, weak_pass;
    int i;
    string senha, response;
    
    while(getline(cin, senha)){
        int len = senha.size();
        upp = false, low = false, num = false, weak_pass = false;
        
        if(len < 6 || len > 32) {
            cout << "Senha invalida." << endl;
            continue;
        }
        
        for(i = 0; i < len; i++) {
            if(isalpha(senha[i])){
                if(isupper(senha[i])){
                    upp = true;
                }else{
                    low = true;
                }
            }else if(isdigit(senha[i])){
                num = true;
            }else {
                weak_pass = true;
                break;
            }
        }
        
        response = weak_pass || !(upp && low && num) ? "Senha invalida." : "Senha valida.";
        cout << response << endl;
        
    }
    return 0;
}