#include <stdio.h>

int table[9][9];

int verifyLine(int num){
    int clearNums[10];
    for(int j = 0; j < 10; j++){
        clearNums[j] = 0;
    }
    
    for(int i = 0; i < 9; i++){
        if(clearNums[table[num][i]]) return 0;
        clearNums[table[num][i]] += 1;
    }
    return 1;
}

int verifyCollumn(int num){
    int clearNums[10];
    for(int j = 0; j < 10; j++){
        clearNums[j] = 0;
    }
    
    for(int i = 0; i < 9; i++){
        if(clearNums[table[i][num]]) return 0;
        clearNums[table[i][num]] += 1;
    }
    return 1;
}

int verifySquare(int num){
    int clearNums[10];
    int linha = 3 * (num / 3), coluna = 3 * (num % 3);
    for(int j = 0; j < 10; j++){
        clearNums[j] = 0;
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(clearNums[table[linha + i][coluna + j]]){
                return 0;
            }
            clearNums[table[linha + i][coluna + j]] += 1;
        }
    }
    return 1;
}

int main(){
    char* sn;
    int q,i,j,l;
    scanf("%d",&q);
    
    
    for(l = 1; l <= q; l++){
        printf("Instancia %d\n",l);
        
        for(i = 0; i < 9; i++){
            
            for(j = 0; j < 9; j++){
                scanf("%d", &table[i][j]);
            }
        }
        sn = "SIM";
        for(int m = 0; m < 9; m++){
            if(!verifyLine(m) || !verifyCollumn(m) || !verifySquare(m)){
                sn = "NAO";
                break;
            }
        }


        printf("%s\n\n",sn);
    }

    return 0;
}