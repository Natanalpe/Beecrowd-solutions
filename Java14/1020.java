import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class Main {
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);
		int valor = Integer.parseInt(in.readLine()),ano,mes,dia;
		
		ano=valor/365;
		valor-=ano*365;
		mes=valor/30;
		valor-=mes*30;
		
		System.out.printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",ano,mes,valor);
        
        
	}
}