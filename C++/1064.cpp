#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int t;
    float a,b,c,d,e,f,media;
    double total=0;
    cin >> a >> b >> c >> d >> e >> f;
    
    if(a>=1){
        t++;
        total+=a;
    };
    if(b>=1){
        t++;
        total+-b;
    };
    if(c>=1){
        t++;
        total+=c;
    };
    if(d>=1){
        t++;
        total+=d;
    };
    if(e>=1){
        t++;
        total+=e;
    };
    if(f>=1){
        t++;
        total+=f;
    };
    total=total/t;
    cout << t << " valores positivos" << endl;
    cout << fixed << setprecision(1) << total << endl;
    return 0;
}