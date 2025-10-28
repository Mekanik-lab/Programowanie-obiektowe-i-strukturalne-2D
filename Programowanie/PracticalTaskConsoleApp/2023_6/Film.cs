namespace PracticalTaskConsoleApp.Czerwiec2023_6
{
    /******************************************************
    nazwa klasy: Film
    pola:
    *tytul - pole chronione przechowujące tytuł filmu, pole jest typu string
    *liczbaWypozyczen - pole chronione przechowujące liczbę wypożyczeń filmu, pole jest typu int
    metody: 
    *UstawTytul - metoda nic nie zwraca (void), ustawia tytuł filmu na wartość przekazaną jako parametr,
    jeśli długość tytułu nie przekracza 20 znaków, w przeciwnym razie rzuca wyjątek ArgumentException
    *PobierzTytul - metoda zwraca tytuł filmu jako string
    *PobierzLiczbeWypozycen - metoda zwraca liczbę wypożyczeń filmu jako int
    *DodajWypozyczenie - metoda nic nie zwraca (void), inkrementuje liczbę wypożyczeń filmu o 1
    informacje: Klasa reprezentuje film w systemie wypożyczalni filmów
    autor: Dawid Strzelecki
    *****************************************************/

    internal class Film
    {
        protected string tytul;
        protected int liczbaWypozyczen;

        public Film()
        {
            tytul = "";
            liczbaWypozyczen = 0;
        }

        public void UstawTytul(string nowyTytul)
        {
            if (nowyTytul.Length <= 20)
            {
                tytul = nowyTytul;
            }
            else
            {
                throw new ArgumentException("Tytuł może mieć maksymalnie 20 znaków.");
            }
        }

        public string PobierzTytul()
        {
            return tytul;
        }

        public int PobierzLiczbeWypozyczen()
        {
            return liczbaWypozyczen;
        }

        public void DodajWypozyczenie()
        {
            liczbaWypozyczen++;
        }
    }
}
