import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);

        String[] line = in.readLine().trim().split(" ");
        
        System.out.println(Long.parseLong(line[0]) * Long.parseLong(line[1]));

    }
}