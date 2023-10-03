import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {

    public static void main(String[] args) throws IOException {
    
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);
        
        String[] line = in.readLine().trim().split(" ");
        int r;
        int p1 = Integer.parseInt(line[0]);
        int c1 = Integer.parseInt(line[1]);
        int p2 = Integer.parseInt(line[2]);
        int c2 = Integer.parseInt(line[3]);
        boolean calc = p1 * c1 == p2 * c2;
        
        if(calc) r = 0;
        else if(p1 * c1 > p2 * c2) r = -1;
        else r = 1;
        System.out.println(r);
    
    }

}