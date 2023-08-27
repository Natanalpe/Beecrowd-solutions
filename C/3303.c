#include <stdio.h>
#include <string.h>
int main(){
    char i[99];
    scanf("%99s",&i);
    if(strlen(i)>=10){
        printf("palavrao\n");
    }else{
        printf("palavrinha\n");
    }
    return 0;
}