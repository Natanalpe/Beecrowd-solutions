#include <iostream>
#include <iomanip>

using namespace std;

int valid(double n){
    return (n >= 0.0) && (n <= 10.0);
}

int calc(){
    int code;
    
    cout << "novo calculo (1-sim 2-nao)" << endl;
    
    while(cin >> code){
        switch(code){
            case 1:
                return 1;
            case 2:
                return 0;
            default:
                break;
        }
        cout << "novo calculo (1-sim 2-nao)" << endl;
    }
    return 0;
}

int main() {
    int code;
    double x,y;
    x=-1.0;
    y=-1.0;
    while(cin >> y){
        if(valid(y)){
            if(x == -1.0){
                x=y;
            }else{
                cout << "media = " << fixed << setprecision(2) << (x + y) / 2.0 << endl;
                x=-1.0;
                if(!calc()){
                    break;
                }
            }
        }
        else{
            cout << "nota invalida" << endl;
        }
    }
    return 0;
}