#include <iostream>

using namespace std;

int main(){
    int n, i, PA, PB, anos;
    double GA, GB;
    cin >> n;
    
    for(i = 0; i < n; i++){
        
        cin >> PA >> PB >> GA >> GB;
        anos = 0;
        GA /= 100;
        GB /= 100;
        
        while(PA <= PB){
            PA += PA * GA;
            PB += PB * GB;
            anos++;
            if(anos > 100) break;
        }
        if(anos > 100) cout << "Mais de 1 seculo." << endl;
        else cout << anos << " anos." << endl;
    }

    return 0;
}