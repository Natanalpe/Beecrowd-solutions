import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {

    static int ehPerfeito(int n){
        int sum = 0;
        for(int i = 1; i < n; i++){
            if(n % i == 0){
                sum += i;
            }
        }
        if(sum == n) return 1;
        return 0;
    }
    
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);
        int i, num, n = Integer.parseInt(in.readLine());
        
        for(i = 0; i < n; i++) {
            num = Integer.parseInt(in.readLine());
            if(ehPerfeito(num) == 1) {
                System.out.println(num + " eh perfeito");
            }else {
                System.out.println(num + " nao eh perfeito");
            }
        }
    }
}