#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    int n,i,j,tam;
    char sentence[1001],temp;
    
    scanf("%d\n",&n);
    
    for(i = 1;i <= n; i++){
        scanf("%[^\n]\n",sentence);
        
        tam = strlen(sentence);
        
        for(j = 0; j < tam; j++){
            if(isalpha(sentence[j]) != 0){
                sentence[j]+=3;
            }
        }
        
        for(j=0; j < tam/2; j++){
            temp = sentence[j];
            sentence[j] = sentence[tam - j - 1];
            sentence[tam - j - 1] = temp;
        }
        
        for(j=tam/2; j < tam; j++){
            sentence[j]--;
        }
        
        printf("%s\n",sentence);
    }
    
    return 0;
}