using System; 

class URI {

    static void Main(string[] args) { 
            
        int n;
        double fibonacci;
        
        n = int.Parse(Console.ReadLine());
    
        fibonacci = (Math.Pow((1 + Math.Sqrt(5)) / 2, n) - Math.Pow((1 - Math.Sqrt(5)) / 2.0, n)) / Math.Sqrt(5);
        Console.WriteLine($"{fibonacci:#.0}");
    }
}