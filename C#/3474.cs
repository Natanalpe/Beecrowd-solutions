using System;

class beecrowd {

    static void Main(string[] args) {
        string[] linha = Console.ReadLine().Trim().Split(' ');
        float venda = float.Parse(linha[0]);
        float integrantes = float.Parse(linha[1]);
        
        Console.WriteLine($"{(venda / integrantes):0.00}");
    }

}