import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.lang.Math;
import java.text.DecimalFormat;

public class Main {

    public static void main(String[] args) throws IOException {
    
    InputStreamReader ir = new InputStreamReader(System.in);
    BufferedReader in = new BufferedReader(ir);
    DecimalFormat df = new DecimalFormat("0.000");
    
        String[] line = in.readLine().trim().split(" ");
        int a = Integer.parseInt(line[0]);
        int b = Integer.parseInt(line[1]);
        int c = Integer.parseInt(line[2]);
        double semiperimetro = (a + b + c) / 2.0;
        double area = Math.sqrt(semiperimetro * (semiperimetro - a) * (semiperimetro - b) * (semiperimetro - c));
        
        System.out.println(df.format(area) + " m2");
    }

}