import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);

        int count = 0;
        double soma = 0.0, media = 0.0;
        
        while(in.ready()){
            String nome = in.readLine();
            soma += Double.parseDouble(in.readLine());
            
            count += 1;
        }

        media = soma / count;
        
        System.out.printf("%.1f\n", media);
    }
}