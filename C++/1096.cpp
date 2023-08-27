#include <iostream>

using namespace std;

int main(){
    int i=1;
    
    while(i <= 9){
        for(int b=7; b>=5;b--){
            cout << "I=" << i << " J=" << b << endl;
        }
        i+=2;
    }
    return 0;
}