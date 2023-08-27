#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    double a = 234.345, b = 45.698;
    
    cout << fixed << setprecision(6) << a << " - " << b << endl;
    cout << fixed << setprecision(0) << a << " - " << b << endl;
    cout << fixed << setprecision(1) << a << " - " << b << endl;
    cout << fixed << setprecision(2) << a << " - " << b << endl;
    cout << fixed << setprecision(3) << a << " - " << b << endl;
    cout << fixed << setprecision(6) << std::scientific << a << " - " << b << endl;
    cout << uppercase << a << " - " << b << endl;
    cout << fixed << setprecision(3) << a << " - " << b << endl;
    cout << setprecision(3) << a << " - " << b << endl;
    
    
    return 0;
}