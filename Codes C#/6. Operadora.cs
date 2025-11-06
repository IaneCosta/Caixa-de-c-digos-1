using System;
using System.Globalization;

class Program {
    static void Main() {
        CultureInfo CI = CultureInfo.InvariantCulture;

        Console.Write("Digite a quantidade de minutos usados: ");
        int minutos = int.Parse(Console.ReadLine());

        double valor = 50.0;
        if (minutos > 100) {
            valor += (minutos - 100) * 2.0;
        }

        Console.WriteLine($"Valor a pagar = R$ {valor:F2}");
    }
}
