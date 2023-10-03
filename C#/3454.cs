using System; 

class URI {

    static void Main(string[] args) { 
        string tabuleiro = Console.ReadLine();
        
        if((tabuleiro == "XXO") || (tabuleiro == "OXX"))
            Console.WriteLine("Alice");
        else if (tabuleiro == "XOX")
            Console.WriteLine("*");
        else
            Console.WriteLine("?");
    }
}