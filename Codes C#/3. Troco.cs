using System;
using System.Globalization;

class Program {
    static void Main() {
        CultureInfo CI = CultureInfo.InvariantCulture;

        Console.Write("Preço unitário do produto: ");
        double preco = double.Parse(Console.ReadLine(), CI);

        Console.Write("Quantidade comprada: ");
        int quantidade = int.Parse(Console.ReadLine());

        Console.Write("Dinheiro recebido: ");
        double recebido = double.Parse(Console.ReadLine(), CI);

        double total = preco * quantidade;
        double troco = recebido - total;

        Console.WriteLine($"Troco = R$ {troco:F2}");
    }
}
