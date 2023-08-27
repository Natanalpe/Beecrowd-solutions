#include <iostream>
#include <iomanip>

using namespace std;

int main() {
 
    int a,r;
    
    for(int i=0;i <5;i++){
        cin >> a;
        if(a%2 == 0){
            r++;
        }
    }
    r--;
    cout << r << " valores pares" << endl;
    return 0;
}