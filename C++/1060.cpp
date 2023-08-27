#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
    int t;
    float a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >> f;
    
    if(a>=1)t++;
    if(b>=1)t++;
    if(c>=1)t++;
    if(d>=1)t++;
    if(e>=1)t++;
    if(f>=1)t++;
    
    cout << t << " valores positivos" << endl;
    return 0;
}