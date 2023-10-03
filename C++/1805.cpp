#include <iostream>

using namespace std;

long long int somaPA(int a0, int an, int n){
    return ((long long int)(a0 + an) * n) / 2;
}

int main(){
    int a, b;

    cin >> a >> b;

    cout << (somaPA(a, b, b - a + 1)) << endl;

    return 0;
}