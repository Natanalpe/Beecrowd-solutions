import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {

public static void main(String[] args) throws IOException {

InputStreamReader ir = new InputStreamReader(System.in);
BufferedReader in = new BufferedReader(ir);
		float a,b,c;
		double x;
		a = Float.parseFloat(in.readLine());
		b = Float.parseFloat(in.readLine());
		c = Float.parseFloat(in.readLine());
		x = (a*2+b*3+c*5)/10;
		System.out.printf("MEDIA = %.1f\n",x);
		
	}
}