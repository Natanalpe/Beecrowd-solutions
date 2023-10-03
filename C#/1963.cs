using System;

class URI {

    static void Main(string[] args) {
        
        string[] line = Console.ReadLine().Trim().Split(' ');
        double antigo = double.Parse(line[0]), novo = double.Parse(line[1]);
        Console.WriteLine((novo / antigo * 100 - 100).ToString("F2") + "%");
 
        
    }
}