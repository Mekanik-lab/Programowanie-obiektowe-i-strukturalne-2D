﻿namespace PracticalTaskConsoleApp.Styczeń2023_1
{
    /**********************************************
    nazwa funkcji: AlgorytmEuklidesa
    opis funkcji: Oblicza największy wspólny dzielnik (NWD) dwóch liczb całkowitych dodatnich metodą Euklidesa.
    parametry: a - pierwsza liczba całkowita dodatnia (int), b - druga liczba całkowita dodatnia (int)
    zwracany typ i opis: int - największy wspólny dzielnik (NWD) dwóch liczb całkowitych dodatnich
    autor: Dawid Strzelecki
    ***********************************************/

    internal class Task1
    {
        public int AlgorytmEuklidesa(int a, int b)
        {
            if (a <= 0 || b <= 0)
            {
                throw new ArgumentException("Liczby muszą być dodatnie.");
            }

            while (a != b)
            {
                if (a > b)
                {
                    a = a - b;
                }
                else
                {
                    b = b - a;
                }
            }

            return a;
        }

        public void Task()
        {
            try
            {
                Console.Write("Podaj pierwszą liczbę a: ");
                int a = int.Parse(Console.ReadLine());

                Console.Write("Podaj drugą liczbę b: ");
                int b = int.Parse(Console.ReadLine());

                int nwd = AlgorytmEuklidesa(a, b);

                Console.WriteLine($"Największy wspólny dzielnik liczb {a} i {b} wynosi: {nwd}");
            }
            catch (FormatException)
            {
                Console.WriteLine("Błąd: Wprowadzono nieprawidłowe dane.");
            }
            catch (ArgumentException ex)
            {
                Console.WriteLine($"Błąd: {ex.Message}");
            }
        }
    }
}

