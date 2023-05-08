#include <stdio.h>
 
int main() {
 
    float a,b,c,d,m;
    scanf("%f %f %f %f",&a,&b,&c,&d);
    a*=2;
    b*=3;
    c*=4;
    m=(a+b+c+d)/10;
    printf("Media: %.1f\n",m);
    
    if(m>=7){
        printf("Aluno aprovado.\n");
    }else if(m<5){
        printf("Aluno reprovado.\n");
    } else if(m>=5 && m<=6.9){
        printf("Aluno em exame.\n");
        float n2,m2;
        scanf("%f",&n2);
        printf("Nota do exame: %.1f\n",n2);
        m2=(m+n2)/2;
        if(m2>=5){
            printf("Aluno aprovado.\n");
        }else if(m2<=4.9){
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n",m2);
    }
    return 0;
}