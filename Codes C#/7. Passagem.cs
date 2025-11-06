using System;
using System.Globalization;

class Program {
    static void Main() {
        CultureInfo CI = CultureInfo.InvariantCulture;

        Console.WriteLine("Códigos de destino:");
        Console.WriteLine("1 - Morros (R$ 120,00)");
        Console.WriteLine("2 - Barreirinhas (R$ 200,00)");
        Console.WriteLine("3 - Bacabeira (R$ 50,00)");
        Console.WriteLine("4 - Rosário (R$ 80,00)");

        Console.Write("\nDigite o código do destino: ");
        int codigo = int.Parse(Console.ReadLine());

        Console.Write("É ida e volta? (s/n): ");
        string tipo = Console.ReadLine().ToLower();

        double valor = 0.0;

        switch (codigo) {
            case 1: valor = 120.0; break;
            case 2: valor = 200.0; break;
            case 3: valor = 50.0; break;
            case 4: valor = 80.0; break;
            default:
                Console.WriteLine("Código inválido.");
                return;
        }

        if (tipo == "s") {
            valor *= 2;
            valor *= 0.9; // aplica 10% de desconto
        }

        Console.WriteLine($"Valor total da passagem: R$ {valor:F2}");
    }
}
