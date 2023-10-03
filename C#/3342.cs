using System;

class URI {

    static void Main(string[] args) {

        int i = Int32.Parse(Console.ReadLine());
        int m = 0;
        double aux, b, p;

        m = i * i;
        aux = m / 2.0;
        b = m % 2 == 0 ? aux : Math.Ceiling(aux);
        p = m % 2 == 0 ? aux : Math.Floor(aux);

        Console.WriteLine(b + " casas brancas e " + p + " casas pretas");
    }
}