#include<stdio.h>

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
        printf("NAO FORMA TRIANGULO\n");
    }else if((a2*a2)==((b2*b2)+(c2*c2))){
        printf("TRIANGULO RETANGULO\n");
    }else if((a2*a2)>((b2*b2)+(c2*c2))){
        printf("TRIANGULO OBTUSANGULO\n");
    }else if((a2*a2)<((b2*b2)+(c2*c2))){
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(a2==b2 && b2==c2){
        printf("TRIANGULO EQUILATERO\n");
    }
    if((a2==b2 && a2!=c2)||(a2==c2 && a2!=b2)||(b2==c2 && b2!=a2)||(b2==a2 && b2!=c2)||(c2==a2 && c2!=b2)||(c2==b2 && c2!=a2)){
        printf("TRIANGULO ISOSCELES\n");
    }
    
    }
    return 0;