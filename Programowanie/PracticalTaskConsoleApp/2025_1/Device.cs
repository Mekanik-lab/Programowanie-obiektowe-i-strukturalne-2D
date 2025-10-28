namespace PracticalTaskConsoleApp._2025_1
{
    internal class Device
    {
        /************************************************ 
        nazwa: ShowInfo
        opis: Metoda wypisuje komunikat który jest argumentem przyjmowanym przez tę metodę
        parametry: info - parametr typu string, jest wyświetlany jako komunikat
        zwracany typ i opis: void - metoda nie zwraca żadnej wartości
        autor: Dawid Strzelecki      
        ************************************************/

        public void ShowInfo(string info)
        {
            Console.WriteLine($"{info}");
        }
    }
}
