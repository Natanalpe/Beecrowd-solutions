#include <iostream>

using namespace std;

int main(){
    int n, i, a, b = 3, total = 0;
    cin >> n;
    
    for(i = 0; i < n; i++) {
        cin >> a;
        
        if(b != a) {
            b = a;
            total++;
        }
    }

    cout << total << endl;
    return 0;
}