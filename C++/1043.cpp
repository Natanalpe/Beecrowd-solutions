#include <iostream>
#include <iomanip>

using namespace std;

int check(float v1,float v2, float v3){
    float calc;
    calc=v1+v2;
    
    if(calc>v3){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    
    float a,b,c,sum,area;
    cin >> a >> b >> c;
    sum=a+b+c;
    area=((a+b)*c)/2.0;
    int abc,acb,bca;
    abc=check(a,b,c);
    acb=check(a,c,b);
    bca=check(b,c,a);
    if(abc == 1 && acb == 1 && bca == 1){
        cout << "Perimetro = " << fixed << setprecision(1) << sum << endl;
    }else{
        cout << "Area = " << fixed << setprecision(1) << area << endl;
    }
    
    return 0;
}