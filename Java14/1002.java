import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class Main {
public static void main(String[] args) throws IOException {

    InputStreamReader ir = new InputStreamReader(System.in);
    BufferedReader in = new BufferedReader(ir);
    
	double pi=3.14159,inp,a;
	inp = Double.parseDouble(in.readLine());
		
	a = pi * Math.pow(inp,2);
	System.out.printf("A=%.4f\n",a);
		
	}
}