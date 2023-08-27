#include <iostream>

using namespace std;

int main() {
 
    int m=1,n=1,b=0,s=0,sum=0;
    
    while(cin >> m >> n){
        sum=0;
        if(m < 1 || n < 1)break;
        if(m>n){b=m;s=n;}
        else{b=n;s=m;}
        
        for(int i=s;i<=b;i++){
            cout << i << " ";
            sum+=i;
        }
        cout << "Sum=" << sum << endl;
        
    }
 
    return 0;
}