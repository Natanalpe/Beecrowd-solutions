#include <iostream>

using namespace std;

int main(){
    int i=1,j=7;
    
    while(i <= 10){
        for(int a=0;a<=2;a++){
            cout << "I=" << i << " J=" << j-a << endl;
        }
        j+=2;
        i+=2;
    }

    return 0;
}