#include <iostream>

using namespace std;

int main(){
    int n, r;
    cin >> n;
    
    if(n < 101 && n > 50) r = 100;
    else if(n < 51 && n > 25) r = 50;
    else if(n < 26 && n > 10) r = 25;
    else if(n < 11 && n > 5) r = 10;
    else if(n < 6 && n > 3) r = 5;
    else if(n < 4 && n > 1) r = 3;
    else r = 1;
    
    cout << "Top " << r << endl;

    return 0;
}