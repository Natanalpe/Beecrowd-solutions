#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a;
    cin >> a;
    
    cout << scientific << showpos << setprecision(4) << uppercase << a << endl;

    return 0;
}