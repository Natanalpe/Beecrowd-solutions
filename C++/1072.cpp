#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int a,i,in,out;
    in=0;
    out=0;
    cin >> i;
    for(int j=1;j < i+1;j++){
        cin >> a;
        if(a>=10 && a<=20){
            in+=1;
        }else{
            out+=1;
        };
    }
    cout << in << " in" << endl;
    cout << out << " out" << endl;
    return 0;
}