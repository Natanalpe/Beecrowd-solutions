#include <iostream>

using namespace std;

int main() {
 
    int q,sum,x,y,b,s;
    cin >> q;
    for(int i=1;i<=q;i++){
        sum=0;
        cin >> x >> y;
        if(x>y){
            s=y;b=x;
        }else{
            s=x;b=y;
        }
        
        for(int j=s+1;j<b;j++){
            if(j%2 == 1){
                sum+=j;
            }
        }
        cout << sum << endl;
    }
    return 0;
}