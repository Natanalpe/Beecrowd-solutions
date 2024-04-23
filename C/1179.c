#include <stdio.h>

int main(){

    int pares[16], impares[16], val, i, j;
    int par_pos = 0, imp_pos = 0;
    
    for(i = 0; i < 15; i++){
        scanf("%d", &val);
    
        if(val % 2 == 0){
            pares[par_pos] = val;
            par_pos++;
        }else{
            impares[imp_pos] = val;
            imp_pos++;
        }
    
        if(par_pos == 5){
            for(j = 0; j < 5; j++){
                printf("par[%d] = %d\n", j, pares[j]);
            }
            
            par_pos = 0;
        }
        
        if(imp_pos == 5){
            for(j = 0; j < 5; j++){
                printf("impar[%d] = %d\n", j, impares[j]);
            }
            imp_pos = 0;
        }
    }
    
    for(i = 0; i < imp_pos; i++){
        printf("impar[%d] = %d\n", i, impares[i]);
    }
    
    for(i = 0; i < par_pos; i++){
        printf("par[%d] = %d\n", i, pares[i]);
    }

    return 0;
}