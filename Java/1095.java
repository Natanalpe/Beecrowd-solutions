import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {

    public static void main(String[] args) throws IOException {
    
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);
        int j = 65, i = -2;
        do {
            i += 3;
            j -= 5;
            System.out.println("I=" + i + " J=" + j);
        }while(j != 0);
    }

}