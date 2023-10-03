#include <iostream>
#include <iomanip>

using namespace std;

class Media {
    private:
        int p1;
        int p2;
        int p3;
        float v1;
        float v2;
        float v3;
        int mediaPonderada;
    public:
        void setPesos(int pa, int pb, int pc);
        void setValores(float va, float vb, float vc);
        float media();
};

void Media::setPesos(int pa, int pb, int pc) {
    p1 = pa;
    p2 = pb;
    p3 = pc;
    mediaPonderada = pa + pb + pc;
}

void Media::setValores(float va, float vb, float vc) {
    v1 = va;
    v2 = vb;
    v3 = vc;
}

float Media::media() {
    float media = (v1 * p1 + v2 * p2 + v3 * p3) / mediaPonderada;
    return media;
}

int main() {
	int N,i;
	Media m;

	cin >> N;

	m.setPesos(2,3,5);
	
	for(i=0;i<N;i++) {
		double v1,v2,v3;
		cin >> v1 >> v2 >> v3;

		m.setValores(v1,v2,v3);
		cout << fixed << setprecision(1) << m.media() << endl;
	}
	return 0;
}