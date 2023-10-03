#include <iostream>
 
using namespace std;
 
int main() {
 
    int n, i;
    cin >> n;
    
    for(i = 0; i < 1000; i++) {
        cout << "N[" << i << "] = " << (i % n) << endl;
    }
 
    return 0;
}