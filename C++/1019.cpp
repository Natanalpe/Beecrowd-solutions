#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
    int input, h, m, s;
    cin >> input;
    h = floor(input / 3600.0);
    m = round(((floor(input/60.0)/60.0)-floor(floor(input/60.0)/60.0))*60.0);
    s = round((((input-(h*3600.0))/60.0)-m)*60.0);
    cout << h << ":" << m << ":" << s << endl;
    
    return 0;
}