namespace PracticalTaskConsoleApp.Czerwiec2023_6
{
    internal class Task3
    {
        public void Task()
        {
            Film film = new Film();
            Console.WriteLine("Początkowa liczba wypożyczeń: " + film.PobierzLiczbeWypozyczen());
            Console.WriteLine("Początkowy tytuł: " + film.PobierzTytul());
            film.UstawTytul("Piraci z karaibów 1");
            Console.WriteLine("Tytuł po ustawieniu: " + film.PobierzTytul());
            Console.WriteLine("Liczba wypożyczeń przed inkrementacją " + film.PobierzLiczbeWypozyczen());
            film.DodajWypozyczenie();
            Console.WriteLine("Liczba wypożyczeń po inkrementacji " + film.PobierzLiczbeWypozyczen());
        }
    }
}
