#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int a;
    int pos=0;
    int neg=0;
    int imp=0;
    int par=0;
    
    for(int i=0;i< 5;i++){
        cin >> a;
        
        a%2 == 0 ||a == 0 ? par++ : imp++;
        if(a>0)pos++;
        if(a<0)neg++;
    }
    cout << par << " valor(es) par(es)" << endl;
    cout << imp << " valor(es) impar(es)" << endl;
    cout << pos << " valor(es) positivo(s)" << endl;
    cout << neg << " valor(es) negativo(s)" << endl;

    return 0;
}