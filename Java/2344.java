import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);
        
        int n;
        char r;
        n = Integer.parseInt(in.readLine());
        
        if (n < 101 && n > 85)     r = 'A';
        else if (n < 86 && n > 60) r = 'B';
        else if (n < 61 && n > 35) r = 'C';
        else if (n < 36 && n > 0)  r = 'D';
        else                       r = 'E';
        
        System.out.println(r);
    }
}