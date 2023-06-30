import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class Main {
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);
        float num = Float.parseFloat(in.readLine());
        if(num >= 0 && num <= 25) {
            System.out.printf("Intervalo [0,25]\n");
        }else if(num >= 25.01 && num <= 50){
            System.out.printf("Intervalo (25,50]\n");
        }else if(num >= 50.01 && num <= 75){
            System.out.printf("Intervalo (50,75]\n");
        }else if(num >= 75.01 & num <= 100){
            System.out.printf("Intervalo (75,100]\n");
        }else{
            System.out.printf("Fora de intervalo\n");
        }
    }
}