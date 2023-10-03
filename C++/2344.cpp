#include <iostream>

using namespace std;

int main(){
    int n;
    char r;
    cin >> n;
    
    if (n < 101 && n > 85)     r = 'A';
    else if (n < 86 && n > 60) r = 'B';
    else if (n < 61 && n > 35) r = 'C';
    else if (n < 36 && n > 0)  r = 'D';
    else                       r = 'E';
    
    cout << r << endl;

    return 0;
}