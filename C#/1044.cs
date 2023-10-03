using System;
using System.Collections.Generic;
using System.Linq;

class URI {

    static void Main(string[] args) { 

        int a, b;
        List<int> line = Console.ReadLine().Trim().Split(' ').Select((e) => int.Parse(e)).ToList();
        a = line[0];
        b = line[1];
        
        if(b % a == 0 || a % b == 0) {
            Console.WriteLine("Sao Multiplos");
        } else {
            Console.WriteLine("Nao sao Multiplos");
        }

    }

}