import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class Main {
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);
        
        String line = in.readLine();
        String[] values = line.trim().split(" ");
        int a,b,c,d;
        a=Integer.parseInt(values[0]);
        b=Integer.parseInt(values[1]);
        c=Integer.parseInt(values[2]);
        d=Integer.parseInt(values[3]);
        int v=0;
        
        if(b > c && d > a && c+d > a+b && c > 0 && d > 0 && a%2 == 0){
            System.out.printf("Valores aceitos\n");
        }else {
            System.out.printf("Valores nao aceitos\n");
        }
    }
}