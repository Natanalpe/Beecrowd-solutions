#include <stdio.h>

int main() {
    int digits[4] = {1, 7, 9, 3};
    unsigned long long a, n;
    scanf("%lld", &n);
    
    while(n--) {
        scanf("%llu", &a);
        printf("%hhd\n", digits[a % 4]);
    }
    
    return 0;
}