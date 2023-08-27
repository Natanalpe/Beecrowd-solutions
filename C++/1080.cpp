#include <iostream>

using namespace std;

int main() {
    int i, maior = 0, posicao;
    
    for(i = 1; i <= 100; i++) {
        int n;
        cin >> n;
        if(n > maior) {
            maior = n;
            posicao = i;
        }
    }
    cout << maior << endl << posicao << endl;
    return 0;
}