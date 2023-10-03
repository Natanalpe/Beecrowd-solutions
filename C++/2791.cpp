#include <iostream>

using namespace std;

int main() {
    
    int n;
    
    for(int i = 1; i < 5; i++) {
        cin >> n;
        if(n){
            cout << i << endl;
            break;
        }
    }
    
    return 0;
}