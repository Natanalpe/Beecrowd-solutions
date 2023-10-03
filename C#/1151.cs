using System; 

class URI {

    static void Main(string[] args) { 

        int n1 = 0, n2 = 1, next = 0;
        int inp = int.Parse(Console.ReadLine());
        
        
        for(int i = 1; i <= inp; i++) {
            if(i == inp) {
                Console.WriteLine(n1);
            } else {
                Console.Write(n1 + " ");
                next = n1 + n2;
                n1 = n2;
                n2 = next;
            }
        }

    }

}