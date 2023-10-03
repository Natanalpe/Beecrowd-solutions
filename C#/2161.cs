using System; 

class URI {

    static void Main(string[] args) { 

        int n, i;
        double raiz;
        
        n = int.Parse(Console.ReadLine());
    
        if(n == 0){
            raiz = 3.0;
            Console.WriteLine(raiz.ToString("F10"));
        }else{
            raiz = 6.0;
            for(i = 0; i < n -1; i++){
                raiz = 6.0 + 1.0 / raiz;
            }
            raiz = 3.0 + 1.0 / raiz;
            Console.WriteLine(raiz.ToString("F10"));
        }   
    }
}