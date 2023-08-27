#include <iostream>

using namespace std;

int main() {
    int s,f,c;
    cin >> s >> f;
    
    if(s==f){
        cout << "O JOGO DUROU 24 HORA(S)" << endl;
    }else if(s>f){
        c=(24-s)+f;
        cout << "O JOGO DUROU " << c << " HORA(S)" << endl;
    }else{
        c=f-s;
        cout << "O JOGO DUROU " << c << " HORA(S)" << endl;
    }
    return 0;
}