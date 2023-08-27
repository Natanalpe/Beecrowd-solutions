#include <iostream>

using namespace std;

int main() {
    int j=65,i=-2;
    
    do{
        i+=3;
        j-=5;
        cout << "I=" << i << " J=" << j << endl;
    }while(j != 0);
    return 0;
}