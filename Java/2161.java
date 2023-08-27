import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class Main {
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);
        
        int n = Integer.parseInt(in.readLine()), i;
        double raiz;
        
        if(n == 0){
            raiz = 3;
            System.out.printf("%.10f\n", raiz);
        }else {
            raiz = 6;
            
            for(i = 0; i < n - 1; i++){
                raiz = 6 + 1 / raiz;
            }
            raiz = 3 + 1 / raiz;
            System.out.printf("%.10f\n", raiz);   
        }
    }
}