#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    float a, b, c;
    
    cin >> a >> b >> c;

    cout << fixed << setprecision(3) << "TRIANGULO: " << a * c / 2 << endl; 
    cout << fixed << setprecision(3) << "CIRCULO: " << 3.14159 * pow(c, 2) << endl; 
    cout << fixed << setprecision(3) << "TRAPEZIO: " << (a + b) * c / 2 << endl; 
    cout << fixed << setprecision(3) << "QUADRADO: " << pow(b, 2) << endl; 
    cout << fixed << setprecision(3) << "RETANGULO: " << a * b << endl; 
    
    return 0;
}