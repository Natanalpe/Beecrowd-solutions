#include <stdio.h>
int main(void){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a > b && a > c && b > c){
      printf("%d\n%d\n%d\n\n",c, b, a);
    } else if (a > c && a > b && c > b){
      printf("%d\n%d\n%d\n\n",b,c,a);
    }else if (b > a && b > c && a > c) {
      printf("%d\n%d\n%d\n\n",c,a,b);
    }else if (b > c && b > a && c > a){
      printf("%d\n%d\n%d\n\n",a,c,b);
    }else if (c > a && c > b && a > b){
      printf("%d\n%d\n%d\n\n",b,a,c);
    }else if (c > b && c > a && b > a){
      printf("%d\n%d\n%d\n\n",a,b,c);
    }
    printf("%d\n%d\n%d\n",a,b,c);
}