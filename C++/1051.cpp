#include <iostream>
#include <iomanip>

using namespace std;

int main() {
 
    float s,c;
    c=0;
    cin >> s;
    
    if(s>4500){
        c+=(s - 4500) * 0.28;
        s=4500.00;
    }
    if(s>3000){
        c+=(s - 3000) * 0.18;
        s=3000;
    }
    if(s>2000){
        c+=(s - 2000) * 0.08;
    }
    if(c == 0.00){
        cout << "Isento" << endl;
    }else{
        cout << "R$ " << fixed << setprecision(2) << c << endl;;
    }
 
    return 0;
}