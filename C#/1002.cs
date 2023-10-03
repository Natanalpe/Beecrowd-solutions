using System;

class URI {

    static void Main(string[] args) { 

        double x = double.Parse(Console.ReadLine());
        double area = Math.Pow(x, 2) * 3.14159;
        
        Console.WriteLine("A=" + area.ToString("F4"));
    }

}