#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int graus_hora, graus_min, hora, min;
    
    while (cin >> graus_hora >> graus_min) {
        hora = graus_hora / 30;
        min = graus_min / 6;
        cout << setfill ('0') << setw(2);
        cout << hora << ":";
        cout << setfill ('0') << setw(2);
        cout << min << endl;
    }

  return 0;
}