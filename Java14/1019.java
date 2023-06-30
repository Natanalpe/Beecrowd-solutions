import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class Main {
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);
		int valor = Integer.parseInt(in.readLine()),secs,mins,hours;
		secs=valor%60;
		mins=(valor%3600)/60;
		hours=valor/3600;
		System.out.printf("%d:%d:%d\n",hours,mins,secs);
        
        
	}
}