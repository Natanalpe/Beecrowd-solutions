#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    int a;
    float b;
    
    cin >> a >> b;

    cout << fixed << setprecision(3) << a / b << " km/l" << endl;
    
    return 0;
}