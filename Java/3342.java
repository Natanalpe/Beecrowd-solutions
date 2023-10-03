import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.lang.Math;
import java.text.DecimalFormat;

public class Main {

    public static void main(String[] args) throws IOException {
    
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);
        DecimalFormat df = new DecimalFormat("0");
        int i = Integer.parseInt(in.readLine()), m;
        double b, p;
        m = i * i;
        b = m % 2 == 0 ? m / 2 : Math.ceil(m / 2) + 1;
        p = m % 2 == 0 ? m / 2 : Math.floor(m / 2);
        
        System.out.println(df.format(b) + " casas brancas e " + df.format(p) + " casas pretas");
        
    }
}