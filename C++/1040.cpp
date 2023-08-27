#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
 
    float a,b,c,d,m;
    cin >> a >> b >> c >> d;
    a*=2;
    b*=3;
    c*=4;
    m=(a+b+c+d)/10;
    cout << "Media: " << fixed << setprecision(1) << m << endl;
    
    if(m>=7){
        cout << "Aluno aprovado." << endl;
    }else if(m<5){
        cout << "Aluno reprovado." << endl;
    } else if(m>=5 && m<=6.9){
        cout << "Aluno em exame." << endl;
        float n2,m2;
        cin >> n2;
        cout << "Nota do exame: " << fixed << setprecision(1) << n2 << endl;
        m2=(m+n2)/2;
        if(m2>=5){
            cout << "Aluno aprovado." << endl;
        }else if(m2<=4.9){
            cout << "Aluno reprovado." << endl;
        }
        cout << "Media final: " << fixed << setprecision(1) << m2 << endl;
    }
    return 0;
}