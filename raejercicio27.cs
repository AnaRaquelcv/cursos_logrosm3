using System;

public class suma
{
    public static void Main(string[] args)
    {
        Console.WriteLine("Ingrese numero 1:");
        double n1 = Convert.ToDouble(Console.ReadLine());

        Console.WriteLine("Ingrese numero 2:");
        double n2 = Convert.ToDouble(Console.ReadLine());

        double divi = n1 + n2;

        Console.WriteLine($"El resultado de su suma es: {divi}");
    }
}