#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int inp=0,coelhos=0,sapos=0,ratos=0,quantidade,total=0;
    char tipo;
    double percSapos,percCoelhos,percRatos;
    cin >> inp;
    
    for(int i=0;i<inp;i++){
        cin >> quantidade >> tipo;
        total+=quantidade;
        
        switch(tipo){
            case 'R':
                ratos+=quantidade;
                break;
            case 'S':
                sapos+=quantidade;
                break;
            case 'C':
                coelhos+=quantidade;
                break;
        }
    }
    percRatos=(100.0 * ratos)/total;
    percCoelhos=(100.0 * coelhos)/total;
    percSapos=(100.0 * sapos)/total;
    
    cout << "Total: " << total << " cobaias" << endl
         << "Total de coelhos: " << coelhos << endl
         << "Total de ratos: " << ratos << endl
         << "Total de sapos: " << sapos << endl
         << fixed << setprecision(2) << "Percentual de coelhos: " << percCoelhos << " %" << endl
         << "Percentual de ratos: " << percRatos << " %" << endl
         << "Percentual de sapos: " << percSapos << " %" << endl;
    return 0;
}