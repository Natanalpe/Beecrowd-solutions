using System; 
using System.Linq;
using System.Collections.Generic;

class URI {
    static void Main(string[] args) {
        
        List<double> line = Console.ReadLine().Trim().Split(' ').Select((e) => double.Parse(e)).ToList();
        
        double a = line[0], b = line[1], c = line[2];
        
        if(a < b + c && b < a + c && c < a + b) {
            Console.WriteLine($"Perimetro = {a + b + c:0.0}");
        }
        else {
            Console.WriteLine($"Area = {(a + b) / 2.0 * c:0.0}");
        }
    }
}