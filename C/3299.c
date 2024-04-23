#include <stdio.h>
#include <string.h>

int main() {
    char n[100], r[] = " NO";
    int i;

    scanf("%s", n);

    for (i = 0; i < strlen(n); i++) {
        if (n[i] == '1' && n[i + 1] == '3') {
            strcpy(r, "");
            break;
        }
    }

    printf("%s%s es de Mala Suerte\n", n, r);

    return 0;
}