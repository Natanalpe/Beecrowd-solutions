#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int a, b, a1, b1;
    double va, vb;
    
    cin >> a >> a1 >> va;
    cin >> b >> b1 >> vb;
    
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << a1 * va + b1 * vb << endl;
    return 0;
}