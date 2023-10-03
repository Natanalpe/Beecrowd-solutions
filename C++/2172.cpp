#include <iostream>

using namespace std;

int main(){
    int x, m;
    
    do {
        cin >> x >> m;
        
        if((x * m) != 0) cout << (x * m) << endl;
        
    }while(x != 0 && m != 0);

    return 0;
}