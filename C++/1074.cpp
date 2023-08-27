#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int i,v;
    cin >> i;
    
    for(int k=1; k<=i;k++){
        cin >> v;
        if(v == 0){
         cout << "NULL" << endl;
        }else{
            if(v%2==0){cout << "EVEN ";}
            else{printf("ODD ");}
            if(v<0){cout << "NEGATIVE" << endl;}
            else if(v>0){cout << "POSITIVE" << endl;}
        }
    }
    return 0;
}