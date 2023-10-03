#include <iostream>

using namespace std;

int main(){
    int a, b, sum, count = 1;
    cin >> a;
    
    sum = a;
    
    while(cin >> b) {
        if(b > a) break;
    }
    
    while(sum < b) {
        sum += a + count;
        count++;
    }
    
    cout << count << endl;
    return 0;
}