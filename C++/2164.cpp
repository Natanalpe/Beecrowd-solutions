#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    int n;
    double fibonacci;
    cin >> n;

    fibonacci = (pow((1 + sqrt(5)) / 2, n) - pow((1 - sqrt(5)) / 2.0, n)) / sqrt(5);
    cout << fixed << setprecision(1) << fibonacci << endl;
    return 0;
}