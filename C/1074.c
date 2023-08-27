#include <stdio.h>
int main() {
    int i,v;
    scanf("%i",&i);
    for(int k=1; k<=i;k++){
        scanf("%i",&v);
        if(v == 0){
         printf("NULL\n");
        }else{
            if(v%2==0){printf("EVEN ");}
            else{printf("ODD ");}
            if(v<0){printf("NEGATIVE\n");}
            else if(v>0){printf("POSITIVE\n");}
        }
    }
    return 0;
}