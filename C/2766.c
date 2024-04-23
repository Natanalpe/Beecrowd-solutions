#include <stdio.h>

int main(){
    char name[31];
    int i;
    
    for(i = 0; i < 10; i++) {
        scanf("%[^\n]\n", name);
        
        if(i == 2 || i == 6 || i == 8) printf("%s\n", name);
    }

    return 0;
}