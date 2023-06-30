import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class Main {
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);
	    
	    String[] lineOne = in.readLine().trim().split(" ");
	    String[] lineTwo = in.readLine().trim().split(" ");
	    int quant1 = Integer.parseInt(lineOne[1]);
	    int quant2 = Integer.parseInt(lineTwo[1]);
	    float value1 = Float.parseFloat(lineOne[2]);
	    float value2 = Float.parseFloat(lineTwo[2]);
	    float total = quant1*value1+quant2*value2;
	    System.out.printf("VALOR A PAGAR: R$ %.2f\n",total);
	}
}