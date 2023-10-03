#include <iostream>

using namespace std;

class Tupla {
    private:
        int a;
        int b;
    public:
        int Ler();
        void Cresc_Descr();
};

int Tupla::Ler() {
    cin >> a >> b;
    
    if(a == b) {
        return 0;
    }
    return 1;
}

void Tupla::Cresc_Descr() {
    if(a > b) cout << "Decrescente";
    else      cout << "Crescente";
              cout << endl;
}

int main() { 
    
	Tupla a;

	while (a.Ler()) {
		a.Cresc_Descr();
	}
	
	return 0;
} 