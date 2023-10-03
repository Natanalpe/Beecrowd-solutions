#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
 
    double antigo, novo;
    cin >> antigo >> novo;
    cout << fixed << setprecision(2) << ((novo / antigo) * 100 - 100) << "%" << endl;
 
    return 0;
}