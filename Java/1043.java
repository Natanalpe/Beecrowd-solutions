import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.text.DecimalFormat;

public class Main {
    
    static int check(float v1, float v2, float v3) {
        float calc;
        calc = v1 + v2;
        
        if(calc > v3) {
            return 1;
        } else {
            return 0;
        }
    }
    
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);
        DecimalFormat df = new DecimalFormat("0.0");
        
        float a, b, c, sum, area;
        int abc, acb, bca;
        String[] line = in.readLine().trim().split(" ");
        a = Float.parseFloat(line[0]);
        b = Float.parseFloat(line[1]);
        c = Float.parseFloat(line[2]);
        
        sum = a + b + c;
        area = ((a + b) * c) / 2;
        abc = check(a, b, c);
        acb = check(a, c, b);
        bca = check(b, c, a);
        
        if(abc == 1 && acb == 1 && bca == 1) {
            System.out.println("Perimetro = " + df.format(sum));
        }else {
            System.out.println("Area = " + df.format(area));
        }
    }
}