using System; 

class URI {

    static void Main(string[] args) { 

        int n = Int32.Parse(Console.ReadLine()), a;
        
        for(int i = 0; i < n; i++) {
            a = Int32.Parse(Console.ReadLine());
            Console.WriteLine(a % 2 == 0 ? "0" : "1");
        }
    }

}