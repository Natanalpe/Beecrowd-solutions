#include <iostream>

using namespace std;

void imprimirlinha() {
    for(int i = 0; i < 39; i++){
        cout << "-";
    }
    cout << endl;
}

void imprimirHeader(){
    cout << "|  decimal  |  octal  |  Hexadecimal  |" << endl;
}

void imprimirValores(){
    string integ[] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15"};
    string octal[] = {"0", "1", "2", "3", "4", "5", "6", "7", "10", "11", "12", "13", "14", "15", "16", "17"};
    string hexad[] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B", "C", "D", "E", "F"};
    
    for(int i = 0; i < 16; i++){
        
        if(integ[i].length() == 1){
            cout << "|      ";
        }else {
            cout << "|     ";
        }
        cout << integ[i] << "    |";
        
        if(octal[i].length() == 1){
            cout << "    ";
        }else {
            cout << "   ";
        }
        cout << octal[i] << "    |       " << hexad[i] << "       |" << endl;
        
        
    }
}

int main(){
    
    imprimirlinha();
    imprimirHeader();
    imprimirlinha();
    imprimirValores();
    imprimirlinha();

    return 0;
}