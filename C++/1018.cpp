#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    int input;
    
    cin >> input;
    cout << input << endl;
    cout << input / 100 << " nota(s) de R$ 100,00" << endl;
    input %= 100;
    cout << input / 50 << " nota(s) de R$ 50,00" << endl;
    input %= 50;
    cout << input / 20 << " nota(s) de R$ 20,00" << endl;
    input %= 20;
    cout << input / 10 << " nota(s) de R$ 10,00" << endl;
    input %= 10;
    cout << input / 5 << " nota(s) de R$ 5,00" << endl;
    input %= 5;
    cout << input / 2 << " nota(s) de R$ 2,00" << endl;
    input %= 2;
    cout << input << " nota(s) de R$ 1,00" << endl;
    
    return 0;
}