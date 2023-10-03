#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
 
    float venda, integrantes;
    cin >> venda >> integrantes;
    
    cout << fixed << setprecision(2) << (venda / integrantes) << endl;
 
    return 0;
}