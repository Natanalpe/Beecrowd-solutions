#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double nota1,nota2,media;
    do{
        cin >> nota1;
        
        if (nota1<0 || nota1>10)
            cout << "nota invalida" << endl;
    }while (nota1<0 || nota1>10); 
    do{
        cin >> nota2;
        if (nota2<0 || nota2>10)
        cout << "nota invalida" << endl;
    }while (nota2<0 || nota2>10); 
    media = (nota1+nota2)/2;
    cout << "media = " << fixed << setprecision(2) << media << endl;
    return 0;
}