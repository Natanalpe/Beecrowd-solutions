import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {

    public static void main(String[] args) throws IOException {
        
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);
        int n, i, pares = 0;
        
        for(i = 0; i < 5; i++) {
            n = Integer.parseInt(in.readLine());
            if(n % 2 == 0) {
                pares++;
            }
        }
        System.out.println(pares + " valores pares");
    }

}