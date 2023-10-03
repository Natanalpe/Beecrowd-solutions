#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int a, i, p, q; 
    float valor, total = 0;
    cin >> a;
    
    for(i = 0; i < a; i++) {
        cin >> p >> q;
        
        switch(p) {
            case 1001:
                valor = 1.5;
                break;
            case 1002:
                valor = 2.5;
                break;
            case 1003:
                valor = 3.5;
                break;
            case 1004:
                valor = 4.5;
                break;
            case 1005:
                valor = 5.5;
                break;
            default:
                break;
        }
        total += valor * q;
    }
    
    cout << fixed << setprecision(2) << total << endl;
    return 0;
}