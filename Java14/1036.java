import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class Main {
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);
        double a,b,c,x1,x2;
        String line=in.readLine();
        String[] values= line.trim().split(" ");
        a=Double.parseDouble(values[0]);
        b=Double.parseDouble(values[1]);
        c=Double.parseDouble(values[2]);
        double delta = Math.pow(b,2) - 4 * a * c;
        if(a == 0.0 || delta < 0){
            System.out.printf("Impossivel calcular\n");
        }else{
            x1=(-b + Math.sqrt(delta)) / (2*a);
            x2=(-b - Math.sqrt(delta)) / (2*a);
            System.out.printf("R1 = %.5f\n",x1);
            System.out.printf("R2 = %.5f\n",x2);
        }
    }
}