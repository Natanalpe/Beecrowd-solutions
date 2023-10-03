#include <iostream>

using namespace std;

int main(){
    int p1, c1, p2, c2, calc;
    cin >> p1 >> c1 >> p2 >> c2;
    
    calc = p1 * c1 == p2 * c2;
    
    if(p1 * c1 == p2 * c2) cout << 0;
    else if(p1 * c1 > p2 * c2) cout << -1;
    else cout << 1;
    cout << endl;

    return 0;
}