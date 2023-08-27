#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    float a;
    cin >> a;
    
    cout << "VOLUME = "<< fixed << setprecision(3) << (4 / 3.0) * 3.14159 * pow(a, 3) << endl;

    return 0;
}