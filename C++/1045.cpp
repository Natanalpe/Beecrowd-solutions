#include <iostream>

using namespace std;

int main(){
    double a,b,c,a2,b2,c2;
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a>0 && b>0 && c>0){
        if(a>=b && a>=c){
            a2=a;
        }else if(b>=a && b>=c){
            a2=b;
        }else if(c>=a && c>=b){
            a2=c;
        }if((a>=b && a<=c)||(a<=b && a>=c)){
            b2=a;
        }else if((b>=a && b<=c)||(b<=a && b>=c)){
            b2=b;
        }else if((c>=a && c<=b)||(c<=a && c>=b)){
            b2=c;
        }if(a<=b && a<=c){
            c2=a;
        }else if(b<=a && b<=c){
            c2=b;
        }else if(c<=a && c<=b){
            c2=c;
        }
    if(a2>=b2+c2){
        cout << "NAO FORMA TRIANGULO" << endl;
    }else if((a2*a2)==((b2*b2)+(c2*c2))){
        cout << "TRIANGULO RETANGULO" << endl;
    }else if((a2*a2)>((b2*b2)+(c2*c2))){
        cout << "TRIANGULO OBTUSANGULO" << endl;
    }else if((a2*a2)<((b2*b2)+(c2*c2))){
        cout << "TRIANGULO ACUTANGULO" << endl;
    }
    if(a2==b2 && b2==c2){
        cout << "TRIANGULO EQUILATERO" << endl;
    }
    if((a2==b2 && a2!=c2)||(a2==c2 && a2!=b2)||(b2==c2 && b2!=a2)||(b2==a2 && b2!=c2)||(c2==a2 && c2!=b2)||(c2==b2 && c2!=a2)){
        cout << "TRIANGULO ISOSCELES" << endl;
    }
    
    }
    return 0;
}