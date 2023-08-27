#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int n, i;
  double raiz;

  scanf("%d", &n);

  if(n == 0){
      raiz = 3.0;
      cout << fixed << setprecision(10) << raiz << endl;
  }else{
      raiz = 6.0;
      for(i = 0; i < n -1; i++){
          raiz = 6.0 + 1.0 / raiz;
      }
      raiz = 3.0 + 1.0 / raiz;
      cout << fixed << setprecision(10) << raiz << endl;
  }


  return 0;
}