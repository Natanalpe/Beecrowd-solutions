import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class Main {
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);
        int a = Integer.parseInt(in.readLine());
        int b = Integer.parseInt(in.readLine());
        double calc = b / 12.0 * a;
        System.out.printf("%.3f\n",calc);
	}
}