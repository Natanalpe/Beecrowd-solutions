import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);
        String l;
        
        while(in.ready()){
            l = in.readLine().trim();
            if(l.equals("xxL")) {
                System.out.println("Esse eh o meu lugar");
            } else {
                System.out.println("Oi, Leonard");
            }
        }
    }
}