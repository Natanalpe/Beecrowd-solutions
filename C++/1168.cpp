#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int a, i, sum, j, lds[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    char ns[101];
    cin >> a;
    
    for(i = 0; i < a; i++) {
        cin >> ns;
        sum = 0;
        
        for(j = 0; j < strlen(ns); j++) {
             sum += lds[ns[j] - '0'];
        }
        cout << sum << " leds" << endl;
    }
    return 0;
}