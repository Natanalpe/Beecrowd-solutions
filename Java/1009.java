import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class Main {
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);
		String a;
		double t,v,s;
		a=in.readLine();
		s=Double.parseDouble(in.readLine());
		v=Double.parseDouble(in.readLine());
		t=s + v * 0.15;
		System.out.printf("TOTAL = R$ %.2f\n",t);
	}
}