#include <iostream>

using namespace std;

int main() {
    
    int escolha, alcool = 0, gasolina = 0, diesel = 0;
    cin >> escolha;
    
    while(escolha != 4) {
        switch(escolha) {
            case 1:
                alcool++;
                break;
            case 2:
                gasolina++;
                break;
            case 3:
                diesel++;
                break;
            default:
                break;
        }
        cin >> escolha;
    }
    
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alcool << endl;
    cout << "Gasolina: " << gasolina << endl;
    cout << "Diesel: " << diesel << endl;
        

    
    return 0;
}