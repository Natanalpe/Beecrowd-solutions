import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.text.DecimalFormat;

public class Main {

    public static void main(String[] args) throws IOException {
    
    InputStreamReader ir = new InputStreamReader(System.in);
    BufferedReader in = new BufferedReader(ir);
    DecimalFormat df = new DecimalFormat("0.00");
    
        String[] line = in.readLine().trim().split(" ");
        float venda = Float.parseFloat(line[0]);
        float integrantes = Float.parseFloat(line[1]);
        
        
        System.out.println(df.format(venda / integrantes));
    }

}