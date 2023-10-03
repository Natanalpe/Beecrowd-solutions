#include <iostream>

using namespace std;

int main() {
    int h,z,l;
    cin >> h >> z >> l;
    
    if((h > z && h < l) || (h < z && h > l)) {
        cout << "huguinho";
    } else if((z > h && z < l) || (z < h && z > l)) {
        cout << "zezinho";
    } else {
        cout << "luisinho";
    }
    cout << endl;
    return 0;
}