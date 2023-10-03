#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    int a, b, c;
    double area, semiperimetro;
    cin >> a >> b >> c;
    semiperimetro = (a + b + c) / 2.0;
    
    area = sqrt(semiperimetro * (semiperimetro - a) * (semiperimetro - b) * (semiperimetro - c));

    cout << fixed << setprecision(3) << area << " m2" << endl;
    return 0;
}