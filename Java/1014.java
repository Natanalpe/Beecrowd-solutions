import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class Main {
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);
        int a;
        float b,dist;
        a=Integer.parseInt(in.readLine());
        b=Float.parseFloat(in.readLine());
        dist=a/b;
        System.out.printf("%.3f km/l\n",dist);
	}
}