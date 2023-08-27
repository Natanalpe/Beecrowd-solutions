import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class Main {
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);
        String linha = in.readLine();
        String[] valores = linha.trim().split(" ");
        int a,b,c,f1,f2;
        a=Integer.parseInt(valores[0]);
        b=Integer.parseInt(valores[1]);
        c=Integer.parseInt(valores[2]);
        f1=(a+b+Math.abs(a-b))/2;
        f2=(f1+c+Math.abs(f1-c))/2;
        System.out.printf("%d eh o maior\n",f2);
	}
}