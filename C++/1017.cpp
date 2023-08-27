#include <stdio.h>
#include <iomanip>
 
int main() {
    int a,b;
    double c;

    cin >> a >> b;

    c= b / 12.0 * a;

    cout << fixed << setprecision(3) << c << endl;
    return 0;
}