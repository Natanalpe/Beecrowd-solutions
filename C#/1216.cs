using System;

class URI {
    static void Main(string[] args) {
        
        int count = 0;
        double sum = 0.0, media = 0.0;
        string trash_string;
        
        while((trash_string = Console.ReadLine()) != null){
            sum += int.Parse(Console.ReadLine());
            
            count += 1;
            
        }
        
        media = sum / count;
        
        Console.WriteLine($"{media:N1}");
    }
}