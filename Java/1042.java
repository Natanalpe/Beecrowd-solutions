import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);

        String line = in.readLine();
        String[] values = line.trim().split(" ");
        
        int a = Integer.parseInt(values[0]);
        int b = Integer.parseInt(values[1]);
        int c = Integer.parseInt(values[2]);
        
        if (a > b && a > c && b > c){
          System.out.println(c + "\n" + b + "\n" + a);
        } else if (a > c && a > b && c > b){
          System.out.println(b + "\n" + c + "\n" + a);
        }else if (b > a && b > c && a > c) {
          System.out.println(c + "\n" + a + "\n" + b);
        }else if (b > c && b > a && c > a){
          System.out.println(a + "\n" + c + "\n" + b);
        }else if (c > a && c > b && a > b){
          System.out.println(b + "\n" + a + "\n" + c);
        }else if (c > b && c > a && b > a){
          System.out.println(a + "\n" + b + "\n" + c);
        }
        System.out.println("\n" + a + "\n" + b + "\n" + c);
        
    }
}