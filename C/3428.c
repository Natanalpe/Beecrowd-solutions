#include <stdio.h>
#include <stdlib.h>

int main() {

  int baloes, i, balao, dardosCont = 0;
  int *dardos = (int *)malloc(1000001 * sizeof(int));
  
  for (i = 0; i < 1000001; i++) {
    dardos[i] = 0;
  }

  scanf("%d", &baloes);

  for (i = 0; i < baloes; i++) {
    scanf("%d", &balao);

    dardos[balao] ? dardos[balao]-- : dardosCont++;
    dardos[balao - 1]++;
  }

  printf("%d\n", dardosCont);

  return 0;
}