using System; 

class URI {

    static void Main(string[] args) { 
        string[] line = Console.ReadLine().Trim().Split(' ');
        int a = Int32.Parse(line[0]), b = Int32.Parse(line[1]);
        int c = Int32.Parse(line[2]), d = Int32.Parse(line[3]);
        
        if((b>c)&&(d>a)&&(c+d)>(a+b)&&(c>0)&&(d>0)&&(a%2==0)){
            Console.WriteLine("Valores aceitos");
        }else{
            Console.WriteLine("Valores nao aceitos");
        }
    }
}