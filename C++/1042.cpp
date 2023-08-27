#include <iostream>

using namespace std;

void ler(int *n1, int *n2, int *n3) {
    cin >> *n1 >> *n2 >> *n3;
}

void ordenar(int *n1, int *n2, int *n3){
    int maiorAB = (*n1 + *n2 + abs(*n1 - *n2)) / 2;
    int maiorABC = (maiorAB + *n3 + abs(maiorAB - *n3)) / 2;
    int menorAB = *n1 < *n2 ? *n1 : *n2;
    int menorABC = menorAB < *n3 ? menorAB : *n3;
    int meio;
    
    if ((*n1 < *n2 && *n1 > *n3) || (*n1 > *n2 && *n1 < *n3)) {
        meio = *n1;
    } else if ((*n2 < *n1 && *n2 > *n3) || (*n2 > *n1 && *n2 < *n3)) {
        meio = *n2;
    } else {
        meio = *n3;
    }
    *n1 = menorABC;
    *n2 = meio;
    *n3 = maiorABC;
}

int main() {
    
    int a, b, c, i, x, y, z;
    
    ler(&a, &b, &c);
    x = a;
    y = b;
    z = c;
    
    ordenar(&x, &y, &z);
    cout << x << endl;
    cout << y << endl;
    cout << z << endl << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    
    return 0;
}