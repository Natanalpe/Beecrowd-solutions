#include <stdio.h>

int main() {
    int attr, cartasM, cartasL, m, l, m1, l1;
    int attrM[100][100], attrL[100][100], escolhaCM, escolhaCL, escolhAtt;
    int calcM = 0, calcL = 0, attrMCaido = 0, attrLCaido = 0;

    while (scanf("%d", &attr) != EOF) {
        calcM = 0;
        calcL = 0;
        scanf("%d %d", &cartasM, &cartasL);

        for (m = 0; m < cartasM; m++) {
            for (m1 = 0; m1 < attr; m1++) {
                scanf("%d", &attrM[m][m1]);
            }
        }

        for (l = 0; l < cartasL; l++) {
            for (l1 = 0; l1 < attr; l1++) {
                scanf("%d", &attrL[l][l1]);
            }
        }

        scanf("%d %d %d", &escolhaCM, &escolhaCL, &escolhAtt);
        calcM = (escolhaCM * attr) - 1;
        calcL = (escolhaCL * attr) - 1;

        attrMCaido = attrM[escolhaCM - 1][escolhAtt - 1];
        attrLCaido = attrL[escolhaCL - 1][escolhAtt - 1];

        if (attrMCaido > attrLCaido) {
            printf("Marcos\n");
        } else if (attrMCaido < attrLCaido) {
            printf("Leonardo\n");
        } else {
            printf("Empate\n");
        }
    }

    return 0;
}