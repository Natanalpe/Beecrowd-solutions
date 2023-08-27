#include <iostream>

using namespace std;

void imprimirlinha() {
    for(int i = 0; i < 39; i++){
        cout << "-";
    }
    cout << endl;
}

void imprimirString(string p, int pos){
    cout << "|";
    for(int i = 0; i < pos - 1; i++){
        cout << " ";
    }
    cout << p;
    
    for(int j = (pos + p.length() + 2); j <= 39; j++){
        cout << " ";
    }
    cout << "|" << endl;
}

int main(){
    
    imprimirlinha();
    imprimirString("Roberto", 9);
    imprimirString("", 1);
    imprimirString("5786", 9);
    imprimirString("", 1);
    imprimirString("UNIFEI", 9);
    imprimirlinha();

    return 0;
}