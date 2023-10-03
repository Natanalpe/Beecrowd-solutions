import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);

        String[] musicas = new String[] { 
            "PROXYCITY",
            "P.Y.N.G.",
            "DNSUEY!",
            "SERVERS",
            "HOST!",
            "CRIPTONIZE",
            "OFFLINE DAY",
            "SALT",
            "ANSWER!",
            "RAR?",
            "WIFI ANTENNAS"
        };
        int n = Integer.parseInt(in.readLine()), soma;
        
        for(int i = 0; i < n; i++) {
            String[] line = in.readLine().trim().split(" ");
            soma = Integer.parseInt(line[0]) + Integer.parseInt(line[1]);
            
            System.out.println(musicas[soma]);
        }
    }
}