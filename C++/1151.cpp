#include <iostream>

using namespace std;

int main(){
    int inp, fibs[99], i;
    cin >> inp;
    fibs[0] = 0;
    fibs[1] = 1;
    
    for(i = 2; i < inp; i++){
        fibs[i] = fibs[i - 1] + fibs[i - 2];
    }
    for(i = 0; i < inp; i++){
        if(i == inp - 1) cout << fibs[i] << endl;
        else cout << fibs[i] << " ";
    }

    return 0;
}