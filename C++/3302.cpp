#include <iostream>

using namespace std;

int main() {
    int i;
    cin >> i;
    
    for(int j=1;j<i+1;j++){
        int currVal;
        cin >> currVal;
        cout << "resposta " << j << ": " << currVal << endl;
    }
    return 0;
}