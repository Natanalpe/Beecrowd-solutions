#include <stdio.h>
#include <ctype.h>
 
int main() {
    char c, cl;
    
    scanf("%c", &c);
    
    cl = tolower(c);
    
    switch(cl) {
        case 'o':
            printf("mas\n");
            break;
        case 'c':
            printf("mas\n");
            break;
        case 'q':
            printf("mais\n");
            break;
        case 'i':
            printf("mais\n");
            break;
    }
    
    return 0;
}