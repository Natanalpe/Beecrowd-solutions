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
        double antigo = Double.parseDouble(line[0]), novo = Double.parseDouble(line[1]);
        System.out.println(df.format(novo / antigo * 100 - 100) + "%");
    }
}