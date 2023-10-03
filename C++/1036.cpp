#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

class Bhaskara {
    private:
        double a;
        double b;
        double c;
    public:
        void ler();
        int Eq2Grau();
        double delta();
        double raiz1();
        double raiz2();
};

void Bhaskara::ler() {
    cin >> a >> b >> c;
}

double Bhaskara::delta() {
    float d = pow(b, 2) - 4 * a * c;
    return d;
}

int Bhaskara::Eq2Grau() {
    if(a == 0.0) {
        return 0;
    }
    return 1;
}

double Bhaskara::raiz1() {
    float r1 = (-b + sqrt(delta())) / (2 * a);
    return r1;
}

double Bhaskara::raiz2() {
    float r2 = (-b - sqrt(delta())) / (2 * a);
    return r2;
}

int main() {

	Bhaskara B;
	
	B.ler();

	if (B.delta() < 0 || !B.Eq2Grau())
		cout << "Impossivel calcular" << endl;

	else {
		cout << fixed << setprecision(5);
		cout << "R1 = " << B.raiz1() << endl;
		cout << "R2 = " << B.raiz2() << endl;
	}
	return 0;
}