import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {

    public static void main(String[] args) throws IOException {
        
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);
        
        int a, pos=0, neg=0, imp=0, par=0;
        
        for(int i=0;i< 5;i++){
            a = Integer.parseInt(in.readLine());
            
            if(a % 2 == 0 ||a == 0) {
                par++;
            }else {
                imp++;
            }
            if(a>0){pos++;}
            if(a<0){neg++;}
        }
        
        System.out.println(par + " valor(es) par(es)");
        System.out.println(imp + " valor(es) impar(es)");
        System.out.println(pos + " valor(es) positivo(s)");
        System.out.println(neg + " valor(es) negativo(s)");
    }

}