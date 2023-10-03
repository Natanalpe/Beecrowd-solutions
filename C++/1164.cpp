#include <iostream>

using namespace std;

int ehPerfeito(int n){
    int sum = 0;
    for(int i = 1; i < n; i++){
        if(n % i == 0){
            sum += i;
        }
    }
    if(sum == n) return 1;
    return 0;
}

int main(void) { 
   int i,n,num; 
   cin >> n;
   for(i=0; i<n; i++) { 
     cin >> num;
     if (ehPerfeito(num)) 
     cout << num << " eh perfeito" << endl;
     else
        cout << num << " nao eh perfeito" << endl;
     } 
     return 0; 
}