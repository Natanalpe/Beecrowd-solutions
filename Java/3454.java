import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {

public static void main(String[] args) throws IOException {
    InputStreamReader ir = new InputStreamReader(System.in);
    BufferedReader in = new BufferedReader(ir);
    String tabuleiro = in.readLine();
    
    
    if((tabuleiro.equals("XXO")) || (tabuleiro.equals("OXX")))
        System.out.println("Alice");
        
    else if (tabuleiro.equals("XOX"))
        System.out.println("*");
        
    else
        System.out.println("?");
    }
}