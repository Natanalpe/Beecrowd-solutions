#include <stdio.h>
#include <string.h>

int main() {
    int n, i, j, k, m, tam,pm=0;
    char sentence[51];

    scanf("%d\n", &n);

    for (i = 0; i < n; i++) {
        scanf("%[^\n]\n", sentence);
        scanf("%d\n", &m);

        tam = strlen(sentence);
        pm=m-1;
        for (j = 0; j < tam; j++) {
            for(k=1;k <= m; k++){
                if(sentence[j] == 'A'){
                    sentence[j] = 'Z';
                }else{
                    sentence[j]--;
                }
            }
        }

        printf("%s\n", sentence);

        for (j = 0; j < tam; j++) {
            sentence[j] = '\0';
        }
        m = 0;
    }

    return 0;
}