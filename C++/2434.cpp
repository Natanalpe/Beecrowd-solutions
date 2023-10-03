#include <iostream>

using namespace std;

int main(){
    int n, init, dh, lowest_value, i;
    cin >> n >> init;
    lowest_value = init;
    
    for(i = 0; i < n; i++){
        cin >> dh;
        init += dh;
        if(init < lowest_value) lowest_value = init;
    }
    
    cout << lowest_value << endl;
    return 0;
}