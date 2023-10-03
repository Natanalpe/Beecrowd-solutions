#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int linha,i,j;
    double sum=0,matriz;
    char tipo;
    cin >> linha >> tipo;
    
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            cin >> matriz;
            if(linha == i){
                sum+=matriz;
            }
        }
    }
    cout << fixed << setprecision(1) << (tipo == 'S' ? sum : sum / 12.0) << endl;
    
    return 0;
}