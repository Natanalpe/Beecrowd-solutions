#include <iostream>

using namespace std;

int main(){
    
    string a, b, c;
    getline(cin, a);
    getline(cin, b);
    getline(cin, c);
    
    if(a[0] == 'v'){
      if(b[0] == 'a'){
        if(c[0] == 'c'){
          cout << "aguia" << endl;
        }else if(c[0] == 'o'){
          cout << "pomba" << endl;
        }
      }
      else if(b[0] == 'm'){
        if(c[0] == 'o'){
          cout << "homem" << endl;
        }else if(c[0] == 'h'){
          cout << "vaca" << endl;
        }
      }
    }else if(a[0] == 'i'){
      if(b[0] == 'i'){
        if(c[2] == 'm'){
          cout << "pulga" << endl;
        }else if(c[0] == 'h'){
          cout << "lagarta" << endl;
        }
      }else if(b[0] == 'a'){
        if(c[0] == 'h'){
          cout << "sanguessuga" << endl;
        }else if(c[0] == 'o'){
          cout << "minhoca" << endl;
        }
      }
    }
    return 0;
}