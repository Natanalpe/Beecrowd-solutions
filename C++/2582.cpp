#include <iostream>

using namespace std;

int main() {
    
    string musicas[11] = {
        "PROXYCITY",
        "P.Y.N.G.",
        "DNSUEY!",
        "SERVERS",
        "HOST!",
        "CRIPTONIZE",
        "OFFLINE DAY",
        "SALT",
        "ANSWER!",
        "RAR?",
        "WIFI ANTENNAS"
    };
    
    int n, i, x, y, soma;
    
    cin >> n;
    
    for(i = 0; i < n; i++) {
        cin >> x >> y;
        soma = x + y;
        cout << musicas[soma] << endl;
    }
    
    return 0;
}