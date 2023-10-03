#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int i, m, b, p;
    cin >> i;
    m = pow(i, 2);
    b = m % 2 == 0 ? m / 2 : ceil(m / 2) + 1;
    p = m % 2 == 0 ? m / 2 : floor(m / 2);
    cout << b << " casas brancas e " << p << " casas pretas" << endl;

    return 0;
}