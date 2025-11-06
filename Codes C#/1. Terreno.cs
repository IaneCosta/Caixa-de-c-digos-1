using System;
using System.Globalization;

class Program {
    static void Main() {
        CultureInfo CI = CultureInfo.InvariantCulture;

        Console.Write("Digite a largura do terreno: ");
        double largura = double.Parse(Console.ReadLine(), CI);

        Console.Write("Digite o comprimento do terreno: ");
        double comprimento = double.Parse(Console.ReadLine(), CI);

        Console.Write("Digite o valor do metro quadrado: ");
        double valorMetro = double.Parse(Console.ReadLine(), CI);

        double area = largura * comprimento;
        double preco = area * valorMetro;

        Console.WriteLine($"Área do terreno = {area:F2}");
        Console.WriteLine($"Preço do terreno = R$ {preco:F2}");
    }
}
