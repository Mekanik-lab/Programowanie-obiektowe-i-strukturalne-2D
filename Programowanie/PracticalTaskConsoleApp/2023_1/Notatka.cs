namespace PracticalTaskConsoleApp.Styczeń2023_1
{
    /**********************************************
    klasa: Notatka
    opis: Klasa notatka reprezentuje prosty system do tworzenia notatek, 
    które posiadają id, tytuł oraz treść
    pola: 
    *id - pole prywatne przechowywujące unikalny identyfikator notatki, pole jest typu int
    *tytul - pole chronione przechowywujące tytuł notatki, pole jest typu string
    *tresc - pole chronione przechowywujące treść notatki, pole jest typu string
    *licznikNotatek - pole statyczne prywatne przechowujące licznik utworzonych notatek, pole jest typu int
    autor: Dawid Strzelecki
    ***********************************************/

    internal class Notatka
    {
        private static int licznikNotatek = 0;
        private int id;
        protected string tytul;
        protected string tresc;

        public Notatka(string tytul, string tresc)
        {
            licznikNotatek++;
            id = licznikNotatek;
            this.tytul = tytul;
            this.tresc = tresc;
        }

        public void WyswietlNotatke()
        {
            Console.WriteLine($"Tytuł: {tytul}\nTreść: {tresc}");
        }

        public void Diagnostyczna()
        {
            Console.WriteLine($"ID: {id}; Tytuł: {tytul}; Treść: {tresc}");
        }
    }
}
