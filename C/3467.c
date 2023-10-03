#include <stdio.h>
#include <string.h>

int main() {
    
    char l, trash_1, trash_2;
    
    while(scanf("%c%c%c\n", &trash_1, &trash_2, &l) != EOF) {
        printf('L' == l ? "Esse eh o meu lugar\n" : "Oi, Leonard\n");
    }
    
    return 0;
}