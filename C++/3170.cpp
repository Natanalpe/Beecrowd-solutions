#include <iostream>

using namespace std;

int main() {
    int b, g, f;
    cin >> b >> g;
    f = g / 2 - b;
    
    if(f > 0) {
        cout << "Faltam " << f << " bolinha(s)";
    }else {
        cout << "Amelia tem todas bolinhas!";
    }
    cout << endl;
    return 0;
}