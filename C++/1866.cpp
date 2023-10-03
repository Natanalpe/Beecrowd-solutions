#include <iostream>

using namespace std;

int main() {
 
    int n, i, c;
    cin >> n;
    
    for(i = 0; i < n; i++) {
        cin >> c;
        if(c % 2 == 0) cout << "0" << endl;
        else cout << "1" << endl;
    }
    return 0;
}