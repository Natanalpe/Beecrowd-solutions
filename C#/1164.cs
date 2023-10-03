using System; 

class URI {

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
    
    static void Main(string[] args) { 
        int i, num, n = int.Parse(Console.ReadLine());
        
        for(i = 0; i < n; i++) {
            num = int.Parse(Console.ReadLine());
            if(ehPerfeito(num) == 1){
                Console.WriteLine(num + " eh perfeito");
            }else {
                Console.WriteLine(num + " nao eh perfeito");
            }
        }
    }
}