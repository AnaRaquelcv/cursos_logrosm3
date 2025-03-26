using System;

public class AreaRectangulo
{
    public static void Main(string[] args)
    {
        Console.WriteLine("Ingrese la temperatura en grados Celsius:");
        double gradosCelsius = Convert.ToDouble(Console.ReadLine());

        double temperatura = (gradosCelsius * 1.8) + 32;

        Console.WriteLine($"La temperatura en Grados Fahrenheit es de: {temperatura}");
    }
}