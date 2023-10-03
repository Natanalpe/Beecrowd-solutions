#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    int n, sum = 0;
    string trash_string;
    double media, count = 0;
    
    while(getline(cin, trash_string)) {
        cin >> n;
        cin.ignore();
        
        sum += n;
        count++;
    }
    media = sum / count;
    cout << fixed << setprecision(1) << media << endl;

    return 0;
}