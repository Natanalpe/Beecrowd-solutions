import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class Main {
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);
	    float a;
	    double v;
	    a=Float.parseFloat(in.readLine());
	    v=(4.0/3) * 3.14159 * Math.pow(a,3);
	    
	    System.out.printf("VOLUME = %.3f\n",v);
	}
}