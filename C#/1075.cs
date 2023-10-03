using System; 

class URI {

    static void Main(string[] args) { 
        int n = int.Parse(Console.ReadLine()), i, maior = 0, posicao = 0;
    
        for(i = 0; i < 10000; i++) {
            if(i % n == 2) {
                Console.WriteLine(i);
            }
        }
    }

}