import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class Main {
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);
        
        String[] line = in.readLine().trim().split(" ");
        
        float x = Float.parseFloat(line[0]), y = Float.parseFloat(line[1]);
        
        if((x == 0) && (y == 0)) {
            System.out.println("Origem");
        }else if((x == 0) && (y != 0)) {
            System.out.println("Eixo Y");
        }else if((y == 0) && (x != 0)) {
            System.out.println("Eixo X");
        }else if((x > 0) && (y > 0)) {
            System.out.println("Q1");
        } else if((x < 0) && (y > 0)) {
            System.out.println("Q2");
        } else if((x < 0) && (y < 0)) {
            System.out.println("Q3");
        } else if((x > 0) && (y < 0)) {
            System.out.println("Q4");
        }
        
    }
}