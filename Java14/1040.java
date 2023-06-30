import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class Main {
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);
        String line = in.readLine();
        String[] values = line.trim().split(" ");
        float a=Float.parseFloat(values[0]);
        float b=Float.parseFloat(values[1]);
        float c=Float.parseFloat(values[2]);
        float d=Float.parseFloat(values[3]);
        float notaEmExame;
        double media = (a*2+b*3+c*4+d*1)/10;
        System.out.printf("Media: %.1f\n",media);
        if(media >= 7.0){
            System.out.printf("Aluno aprovado.\n");
        }else if(media < 5.0){
            System.out.printf("Aluno reprovado.\n");
        }else {
            System.out.printf("Aluno em exame.\n");
            notaEmExame = Float.parseFloat(in.readLine());
            System.out.printf("Nota do exame: %.1f\n",notaEmExame);
            media=(media+notaEmExame) / 2;
            if(media >= 5.0){
                System.out.printf("Aluno aprovado.\n");
            }else{
                System.out.printf("Aluno reprovado.\n");
            }
            System.out.printf("Media final: %.1f\n",media);
        }
    }
}