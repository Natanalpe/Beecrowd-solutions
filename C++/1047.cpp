#include <iostream>

using namespace std;

int main() {
    int h1,h2,m1,m2,c1,c2;
    cin >> h1 >> m1 >> h2 >> m2;
    int s,f;
    s=m1+h1*60;
    f=m2+h2*60;
    if(f<=s){
        f+=24*60;
    }
    c1=(f-s)/60;
    c2=(f-s)%60;
    cout << "O JOGO DUROU " << c1 << " HORA(S) E " << c2 << " MINUTO(S)" << endl;
    return 0;
}