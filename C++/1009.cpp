#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    string nome;
    double base, vendas;
    
    cin >> nome >> base >> vendas;
    
    cout << "TOTAL = R$ " << fixed << setprecision(2) << vendas * 0.15 + base << endl;
    return 0;
}