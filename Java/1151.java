import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);
        
        int n1 = 0, n2 = 1, next = 0;
        int inp = Integer.parseInt(in.readLine());
        
        for(int i = 1; i <= inp; i++) {
            if(i == inp) {
                System.out.println(Integer.toString(n1));
            } else {
                System.out.printf(n1 + " ");
                next = n1 + n2;
                n1 = n2;
                n2 = next;
            }
        }
    }
}