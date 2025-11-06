using System;
using System.Globalization;

class Program {
    static void Main() {
        CultureInfo CI = CultureInfo.InvariantCulture;

        Console.Write("Digite a quantidade de glicose (mg/dl): ");
        double glicose = double.Parse(Console.ReadLine(), CI);

        string classificacao;

        if (glicose <= 100.0) {
            classificacao = "Normal";
        } else if (glicose <= 140.0) {
            classificacao = "Elevado";
        } else {
            classificacao = "Diabetes";
        }

        Console.WriteLine($"Classificação: {classificacao}");
    }
}
