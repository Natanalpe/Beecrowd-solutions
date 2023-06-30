import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class Main {
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);
        String line = in.readLine();
        String[] values = line.trim().split(" ");
        int a=Integer.parseInt(values[0]);
        int b=Integer.parseInt(values[1]);
        float price=0F;
        switch(a){
            case 1:
                price+=4.0;
                break;
            case 2:
                price+=4.5;
                break;
            case 3:
                price+=5.0;
                break;
            case 4:
                price+=2.0;
                break;
            case 5:
                price+=1.5;
                break;
        }
        price*=b;
        System.out.printf("Total: R$ %.2f\n",price);
        
    }
}