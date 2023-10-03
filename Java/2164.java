import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.lang.Math;
import java.text.DecimalFormat;

public class Main {
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);
        
        DecimalFormat df = new DecimalFormat("#.0");
        int n;
        double fibonacci;
        
        n = Integer.parseInt(in.readLine());
        
        fibonacci = (Math.pow((1 + Math.sqrt(5)) / 2, n) - Math.pow((1 - Math.sqrt(5)) / 2.0, n)) / Math.sqrt(5);
        System.out.println(df.format(fibonacci));
    }
}