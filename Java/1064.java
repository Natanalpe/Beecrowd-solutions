import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.text.DecimalFormat;

public class Main {

    public static void main(String[] args) throws IOException {
        
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);
        DecimalFormat df = new DecimalFormat("#.#");
        
        int positivos = 0, i;
        float media = 0, n;
        
        for(i = 0; i < 6; i++) {
            n = Float.parseFloat(in.readLine());
            
            if(n > 0) {
                positivos++;
                media += n;
            }
        }
        media /= positivos;
        
        System.out.println(positivos + " valores positivos");
        System.out.println(df.format(media));
    }

}