import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class Main {
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);
        int input = Integer.parseInt(in.readLine());
        System.out.printf("%d\n",input);
        System.out.printf("%d nota(s) de R$ 100,00\n",input/100);
        input%=100;
        System.out.printf("%d nota(s) de R$ 50,00\n",input/50);
        input%=50;
        System.out.printf("%d nota(s) de R$ 20,00\n",input/20);
        input%=20;
        System.out.printf("%d nota(s) de R$ 10,00\n",input/10);
        input%=10;
        System.out.printf("%d nota(s) de R$ 5,00\n",input/5);
        input%=5;
        System.out.printf("%d nota(s) de R$ 2,00\n",input/2);
        input%=2;
        System.out.printf("%d nota(s) de R$ 1,00\n",input);
        
	}
}