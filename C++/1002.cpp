#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    
    double n = 3.14159, a, area;
    cin >> a;
    area = n * pow(a, 2);
    
    cout << "A=" << fixed << setprecision(4) << area << endl;
    

    return 0;
}