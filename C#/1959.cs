using System;
using System.Collections.Generic;
using System.Linq;

class URI{
    static void Main(string[] args){
        List<long> line = Console.ReadLine().Trim().Split(' ').Select((x) => long.Parse(x)).ToList();
        
        Console.WriteLine(line[0] * line[1]);
    }
}