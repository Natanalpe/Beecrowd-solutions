#include <iostream>

using namespace std;

class Vet {
    private:
        int vetor_lido[20];
        int vetor_invertido[20];
        int i, auxiliar;
    public:
        void ler();
        void trocar();
        void mostrar();
};

void Vet::ler() {
    for(i = 0; i < 20; i++) {
        cin >> vetor_lido[i];
    }
}

void Vet::trocar() {
    auxiliar = 19;
    
    for(i = 0; i < 20; i++) {
        vetor_invertido[i] = vetor_lido[auxiliar];
        auxiliar--;
    }
}

void Vet::mostrar() {
    for(i = 0; i < 20; i++) {
        cout << "N[" << i << "] = " << vetor_invertido[i] << endl;
    }
}
int main() {

	Vet v;

	v.ler();
	v.trocar();
	v.mostrar();

	return 0;
}