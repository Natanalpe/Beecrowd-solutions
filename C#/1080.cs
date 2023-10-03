using System; 

class URI {

    static void Main(string[] args) { 

        int n, i, maior = 0, posicao = 0;
        for(i = 1; i <= 100; i++) {
            n = int.Parse(Console.ReadLine());
            
            if(n > maior) {
                maior = n;
                posicao = i;
            }
        }
        Console.WriteLine(maior);
        Console.WriteLine(posicao);

    }

}