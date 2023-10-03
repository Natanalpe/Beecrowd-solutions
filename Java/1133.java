import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {

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
    
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);
        int x = Integer.parseInt(in.readLine()), y = Integer.parseInt(in.readLine()), a, b, i;
        
        a = min(x, y) + 1;
        b = max(x, y);
        
        for(i = a; i < b; i++) {
            if((i % 5 == 2) || (i % 5 == 3)) {
                System.out.println(i);
            }
        }
        
    }
}