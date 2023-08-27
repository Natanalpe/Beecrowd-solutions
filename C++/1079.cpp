#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n, i;
    cin >> n;
    
    for(i = 0; i < n; i++) {
        float a, b, c, media;
        cin >> a >> b >> c;
        media = (a * 2 + b * 3 + c * 5) / 10;
        
        
        cout << fixed << setprecision(1) << media << endl;
    }
    return 0;
}