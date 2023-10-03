import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {

    public static void main(String[] args) throws IOException {
    
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);
        int n = Integer.parseInt(in.readLine()), a;
        
        for(int i = 0; i < n; i++) {
            a = Integer.parseInt(in.readLine());
            
            System.out.println(a % 2 == 0 ? "0" : "1");
        }
        
    }
}