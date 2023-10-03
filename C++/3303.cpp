#include <iostream>
#include <cstring>

using namespace std;

int main(){
    string i;
    cin >> i;

    if(i.size() >= 10)cout << "palavrao";
    else cout << "palavrinha";
    cout << endl;
    return 0;
}