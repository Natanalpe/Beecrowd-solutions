#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main() {
    char phrase[51];
    
    while (fgets(phrase, sizeof(phrase), stdin) != NULL) {
        bool maiuscula = true;
        
        for (int i = 0; phrase[i] != '\0'; i++) {
            if (isalpha(phrase[i])) {
                if (maiuscula){
                    phrase[i] = toupper(phrase[i]);
                }
                else{
                    phrase[i] = tolower(phrase[i]);
                }
                maiuscula = !maiuscula;
            }
        }
        printf("%s", phrase);
    }
    
    return 0;
}