#include <iostream>
#include <cmath>

using namespace std;

int main() {
 
    int i,c;
    cin >> i;
    for(int j=1;j<i+1;j++){
        if(j%2==0){
            c=pow(j,2);
            cout << j << "^2 = " << c << endl;
        }
    }
    return 0;
}