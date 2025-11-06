using System;
using System.Globalization;

class Program {
    static void Main() {
        CultureInfo CI = CultureInfo.InvariantCulture;

        Console.Write("Dados da primeira pessoa:\nNome: ");
        string nome1 = Console.ReadLine();
        Console.Write("Idade: ");
        int idade1 = int.Parse(Console.ReadLine());

        Console.Write("Dados da segunda pessoa:\nNome: ");
        string nome2 = Console.ReadLine();
        Console.Write("Idade: ");
        int idade2 = int.Parse(Console.ReadLine());

        double media = (idade1 + idade2) / 2.0;

        Console.WriteLine($"A idade média de {nome1} e {nome2} é de {media:F1} anos");
    }
}
