import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class Main {
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);
        int tempo = Integer.parseInt(in.readLine());
        int calc= 60 * tempo / 30;
        System.out.printf("%d minutos\n",calc);
	}
}