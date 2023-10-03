using System; 

class URI {

    static int min(int a, int b) {
      if (a < b) {
        return a;
      } else {
        return b;
      }
    }
    
    static int max(int a, int b) {
      if (a > b) {
        return a;
      } else {
        return b;
      }
    }

    static void Main(string[] args) { 
      
    int x = Int32.Parse(Console.ReadLine()), y = Int32.Parse(Console.ReadLine()), a, b, i;
    
    a = min(x, y) + 1;
    b = max(x, y);
    
    for(i = a; i < b; i++) {
        if((i % 5 == 2) || (i % 5 == 3)) {
            Console.WriteLine(i);
        }
    }
  }
}