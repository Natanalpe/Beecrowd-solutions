import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class Main {
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);
        float value = Float.parseFloat(in.readLine());
        double[] moneyBill = {100,50,20,10,5,2};
        double[] coins = {1.00,0.50, 0.25, 0.10, 0.05, 0.01};
        double rest = value * 100;
        System.out.printf("NOTAS:\n");
        
        for(int i=0;i<=5;i++){
            double quantity = Math.floor(rest / (moneyBill[i] * 100));
            System.out.printf("%.0f nota(s) de R$ %.2f\n",quantity,moneyBill[i]);
            rest %= moneyBill[i] * 100;
        }
        System.out.printf("MOEDAS:\n");
        for(int j=0;j<=5;j++){
            double quantityC = Math.floor(rest / (coins[j] * 100));
            System.out.printf("%.0f moeda(s) de R$ %.2f\n",quantityC,coins[j]);
            rest %= coins[j] * 100;
        }
	}
}