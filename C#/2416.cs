using System; 

class URI {

    static void Main(string[] args) { 

        string[] line = Console.ReadLine().Trim().Split(' ');
        int a = int.Parse(line[0]);
        int b = int.Parse(line[1]);
        int r = a % b;
        Console.WriteLine(r);

    }

}