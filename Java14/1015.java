import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class Main {
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);
        String linha1 = in.readLine();
        String linha2 = in.readLine();
        String[] val1 = linha1.trim().split(" ");
        String[] val2 = linha2.trim().split(" ");
        float x1,x2,y1,y2;
        double dist;
        x1=Float.parseFloat(val1[0]);
        y1=Float.parseFloat(val1[1]);
        x2=Float.parseFloat(val2[0]);
        y2=Float.parseFloat(val2[1]);
        dist=Math.sqrt(Math.pow((x2 - x1),2)+Math.pow((y2-y1),2));
        System.out.printf("%.4f\n",dist);
	}
}