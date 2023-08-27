#include <iostream>
#include <iomanip>

using namespace std;

int main() {
 
    int a,s;
    cin >> a;
    if(a%2 == 0)a++;
    for(int i=0; i<=10;i+=2){
        s=a+i;
        cout << s << endl;
    }
    return 0;
}