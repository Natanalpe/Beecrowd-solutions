#include <iostream>

using namespace std;

int main(){
    string a, b;
    cin >> a >> b;
    
    cout << (a.size() >= b.size() ? "go" : "no") << endl;

    return 0;
}