import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {

public static void main(String[] args) throws IOException {

InputStreamReader ir = new InputStreamReader(System.in);
BufferedReader in = new BufferedReader(ir);
		float a,b;
		double x;
		a = Float.parseFloat(in.readLine());
		b = Float.parseFloat(in.readLine());
		x = (a * 3.5 + b * 7.5) / 11;
		System.out.printf("MEDIA = %.5f\n",x);
		
	}
}