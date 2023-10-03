import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {

    public static void main(String[] args) throws IOException {
        
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);
        int n = Integer.parseInt(in.readLine()), i;
        
        for(i = 0; i < 1000; i++) {
            System.out.println("N[" + i + "] = " + (i % n));
        }
    }

}