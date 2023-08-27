#include <iostream>

using namespace std;

int main() {
    
    string alphabet[] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};
    
    for(int i = 0; i < 26; i++){
        cout << i + 97 << " e " << alphabet[i] << endl;
    }
    
    return 0;
}