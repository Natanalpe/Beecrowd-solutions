#include <iostream>

using namespace std;

int min(int a, int b) {
  if (a < b) {
    return a;
  } else {
    return b;
  }
}

int max(int a, int b) {
  if (a > b) {
    return a;
  } else {
    return b;
  }
}

int main() {
    
    int x, y, a, b, i;
    cin >> x >> y;
    
    a = min(x, y) + 1;
    b = max(x, y);
    
    for(i = a; i < b; i++) {
        if((i % 5 == 2) || (i % 5 == 3)) {
            cout << i << endl;
        }
    }
    
    return 0;
}