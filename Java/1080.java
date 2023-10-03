import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {

    public static void main(String[] args) throws IOException {
    
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);
        int n, i, maior = 0, posicao = 0;
        
        for(i = 1; i <= 100; i++) {
            n = Integer.parseInt(in.readLine());
            if(n > maior) {
                maior = n;
                posicao = i;
            }
        }
        
        System.out.println(maior);
        System.out.println(posicao);
    }

}