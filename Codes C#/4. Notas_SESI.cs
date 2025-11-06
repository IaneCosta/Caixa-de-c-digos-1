using System;
using System.Globalization;

class Program {
    static void Main() {
        CultureInfo CI = CultureInfo.InvariantCulture;
        double[] notas = new double[7];

        for (int i = 0; i < 7; i++) {
            Console.Write($"Nota {i + 1}: ");
            notas[i] = double.Parse(Console.ReadLine(), CI);
        }

        double media1 = (notas[0] + notas[1] + notas[2]) / 3.0;
        double media2 = (notas[3] + notas[4] + notas[5]) / 3.0;
        double mediaFinal = (media1 + media2 + notas[6]) / 3.0;

        Console.WriteLine($"Nota final = {mediaFinal:F1}");

        if (mediaFinal < 60.0) {
            Console.WriteLine("Conceito: C");
        } else if (mediaFinal < 80.0) {
            Console.WriteLine("Conceito: B");
        } else {
            Console.WriteLine("Conceito: A");
        }
    }
}
