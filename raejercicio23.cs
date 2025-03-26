using System;

public class AreaTriangulo
{
    public static void Main(string[] args)
    {
        Console.WriteLine("Ingrese la base del triangulo:");
        double baseT = Convert.ToDouble(Console.ReadLine());

        Console.WriteLine("Ingrese la altura del triangulo:");
        double alturaT = Convert.ToDouble(Console.ReadLine());

        double area = (baseT * alturaT) /2;

        Console.WriteLine($"El área del triangulo es: {area}");
    }
}