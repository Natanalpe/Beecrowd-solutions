using System;
using System.Collections.Generic;
using System.Linq;

class URI {

    static void Main(string[] args) { 
    
        string[] musicas = {
            "PROXYCITY",
            "P.Y.N.G.",
            "DNSUEY!",
            "SERVERS",
            "HOST!",
            "CRIPTONIZE",
            "OFFLINE DAY",
            "SALT",
            "ANSWER!",
            "RAR?",
            "WIFI ANTENNAS"
        };
        
        int n, i, soma;
        n = int.Parse(Console.ReadLine());
        
        for(i = 0; i < n; i++) {
            List<int> x_y = Console.ReadLine().Trim().Split(' ').Select((e) => int.Parse(e)).ToList();
            soma = x_y[0] + x_y[1];
            Console.WriteLine(musicas[soma]);
        }
    }
}