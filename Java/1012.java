import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class Main {
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);
        String linha = in.readLine();
        String[] valores = linha.trim().split(" ");
        float a = Float.parseFloat(valores[0]);
        float b = Float.parseFloat(valores[1]);
        float c = Float.parseFloat(valores[2]);
        float triangulo = a*c/2;
        double circulo = 3.14159 * Math.pow(c,2);
        float trapezio = ((a+b)*c)/2;
        float quadrado = b*b;
        float retangulo = a*b;
	    System.out.printf("TRIANGULO: %.3f\nCIRCULO: %.3f\n",triangulo,circulo);
	    System.out.printf("TRAPEZIO: %.3f\nQUADRADO: %.3f\n",trapezio,quadrado);
	    System.out.printf("RETANGULO: %.3f\n",retangulo);
	}
}