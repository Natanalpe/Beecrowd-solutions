#include <stdio.h>

void ler(int *n1, int *n2){
    scanf("%d%d",&*n1, &*n2);
}

int medianaMinima(int n1, int n2){
    return 2 * n1 - n2;
}

int main(void) { 
      int a,b,c; 
      ler(&a, &b);
      while (a > 0 && b > 0) { 
        int mediana = medianaMinima(a,b); 
        printf("%d\n",mediana);
        ler(&a, &b);
      } 
    return 0; 
}