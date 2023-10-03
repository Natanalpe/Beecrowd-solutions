#include <stdio.h>

int main(){
    
    int n, sum = 0;
    char trash_string[99];
    double media, count = 0;
    
    while(scanf("%[^\n]", trash_string) != EOF) {
        scanf("%d\n", &n);
        sum += n;
        count++;
    }
    media = sum / count;
    printf("%.1f\n", media);

    return 0;
}