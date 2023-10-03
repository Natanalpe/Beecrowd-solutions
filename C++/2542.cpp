#include <iostream>

using namespace std;

int main() {
    int attr, cartasM, cartasL, m, l, m1, l1;
    int attrM[100][100], attrL[100][100], escolhaCM, escolhaCL, escolhAtt;
    int calcM = 0, calcL = 0, attrMCaido = 0, attrLCaido = 0;

    while (cin >> attr) {
        calcM = 0;
        calcL = 0;
        cin >> cartasM >> cartasL;

        for (m = 0; m < cartasM; m++) {
            for (m1 = 0; m1 < attr; m1++) {
                cin >> attrM[m][m1];
            }
        }

        for (l = 0; l < cartasL; l++) {
            for (l1 = 0; l1 < attr; l1++) {
                cin >> attrL[l][l1];
            }
        }

        cin >> escolhaCM >> escolhaCL >> escolhAtt;
        calcM = (escolhaCM * attr) - 1;
        calcL = (escolhaCL * attr) - 1;

        attrMCaido = attrM[escolhaCM - 1][escolhAtt - 1];
        attrLCaido = attrL[escolhaCL - 1][escolhAtt - 1];

        if (attrMCaido > attrLCaido) {
            cout << "Marcos" << endl;
        } else if (attrMCaido < attrLCaido) {
            cout << "Leonardo" << endl;
        } else {
            cout << "Empate" << endl;
        }
    }

    return 0;
}