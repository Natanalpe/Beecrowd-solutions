using System; 

class URI {

    static void Main(string[] args) { 

        int n;
        char r;
        n = int.Parse(Console.ReadLine());
        
        if (n < 101 && n > 85)     r = 'A';
        else if (n < 86 && n > 60) r = 'B';
        else if (n < 61 && n > 35) r = 'C';
        else if (n < 36 && n > 0)  r = 'D';
        else                       r = 'E';
        
        Console.WriteLine(r);

    }
}