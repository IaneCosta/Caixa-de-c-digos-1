using System;
using System.Globalization;

class Program {
    static void Main() {
        CultureInfo CI = CultureInfo.InvariantCulture;

        Console.Write("Digite o peso (kg): ");
        double peso = double.Parse(Console.ReadLine(), CI);

        Console.Write("Digite a altura (m): ");
        double altura = double.Parse(Console.ReadLine(), CI);

        double imc = peso / (altura * altura);

        Console.WriteLine($"IMC = {imc:F2}");
    }
}
