#include <stdio.h>

void ler5Cartas(int v[]){
    for(int i = 0; i < 5; i++){
        scanf("%d", &v[i]);
    }
}

char cresc_descr_nulo(int v[]){
    int anterior = 0;
    int eCrescente = 1;
    if(v[0] > v[1] && v[1] > v[2] && v[2] > v[3] && v[3] > v[4]){
        return 'D';
    }else if(v[0] < v[1] && v[1] < v[2] && v[2] < v[3] && v[3] < v[4]){
        return 'C';
    }else{
        return 'N';
    }
}

int main(void) { 
    int vet[5]; 
    char letra; 
    ler5Cartas(vet);
    letra = cresc_descr_nulo(vet);
    printf("%c\n",letra); 
    return 0; 
}