using System;

public class nota
{
    public static void Main(string[] args)
    {
        Console.WriteLine("Ingrese nota 1:");
        double n1 = Convert.ToDouble(Console.ReadLine());

        Console.WriteLine("Ingrese nota 2:");
        double n2 = Convert.ToDouble(Console.ReadLine());
        
        Console.WriteLine("Ingrese nota 3:");
        double n3 = Convert.ToDouble(Console.ReadLine());

        double suma = n1 + n2 + n3;
        double final = suma / 3;

        Console.WriteLine($"El resultado de su promedio es de: {final}");
    }
}   