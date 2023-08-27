import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);

        String line = in.readLine();
        String[] values = line.trim().split(" ");
        int a, b;
        
        a = Integer.parseInt(values[0]);
        b = Integer.parseInt(values[1]);
        
        if(b % a == 0 || a % b == 0) {
            System.out.println("Sao Multiplos");
        } else {
            System.out.println("Nao sao Multiplos");
        }
    
        
    }
}