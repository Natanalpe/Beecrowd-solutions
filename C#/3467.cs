using System; 

class URI {

    static void Main(string[] args) { 

        string l;
        
        while((l = Console.ReadLine()) != null) {
            Console.WriteLine(l == "xxL" ? "Esse eh o meu lugar" : "Oi, Leonard");
        }
    }
}