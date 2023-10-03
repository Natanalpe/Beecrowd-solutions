using System;

class URI{
    static void Main(string[] args){
        
        double valor;

        valor = double.Parse(Console.ReadLine());
        
        Console.WriteLine("NOTAS:");
        valor = nota(valor,100);
        valor = nota(valor,50);
        valor = nota(valor,20);
        valor = nota(valor,10);
        valor = nota(valor,5);
        valor = nota(valor,2);
        Console.WriteLine("MOEDAS:");
        valor = moeda(valor,1);
        valor = moeda(valor,0.5);
        valor = moeda(valor,0.25);
        valor = moeda(valor,0.1);
        valor = moeda(valor,0.05);
        valor = moeda(valor,0.01);
    }
    
    static double nota(double valor, int nota){
        int qtd;
        qtd = (int) (valor/nota);
        Console.WriteLine(qtd + " nota(s) de R$ " + nota + ".00");
        return valor-qtd*nota;
    }
    
    static double moeda(double valor, double nota){
      int qtd;
      qtd = (int)(((valor+0.001)/nota));
      Console.WriteLine(qtd + " moeda(s) de R$ " + nota.ToString("n2"));
      return valor-qtd*nota;
    }
}