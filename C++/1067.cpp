#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int a;
    cin >> a;
    for(int j=1;j<=a;j++){
        if(j%2 != 0){
            cout << j << endl;
        }
    }
    return 0;
}