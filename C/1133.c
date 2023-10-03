#include <stdio.h>

int min(int a, int b) {
  if (a < b) {
    return a;
  } else {
    return b;
  }
}

int max(int a, int b) {
  if (a > b) {
    return a;
  } else {
    return b;
  }
}

int main() {
    
    int x, y, a, b, i;
    scanf("%d %d", &x, &y);
    a = min(x, y) + 1;
    b = max(x, y);
    
    for(i = a; i < b; i++) {
        if((i % 5 == 2) || (i % 5 == 3)) {
            printf("%d\n", i);
        }
    }
    
    return 0;
}