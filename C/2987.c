#include <stdio.h>

int main() {
    char alphabet[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
                         'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
    char x;
    scanf("%c", &x);
    
    for(int i = 0; i < 26; i++) {
        if(x == alphabet[i]) printf("%d\n", i + 1);
    }
    return 0;
}