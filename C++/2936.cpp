#include <iostream>

using namespace std;

int main(){
    
    int i, p, gramas[5] = {300, 1500, 600, 1000, 150}, total = 225;
    
    for(i = 0; i < 5; i++) {
        cin >> p;
        total += p * gramas[i];
    }
    cout << total << endl;
    
    return 0;
}