#include <iostream>
#include <fstream>

void task1()
{
    std::string name;
    int age;

    std::cout << "Podaj imi�:\n";
    std::cin >> name;

    std::cout << "Podaj sw�j wiek:\n";
    std::cin >> age;

    std::ofstream writeInFile;
    writeInFile.open("c:\\dane.txt", std::ios::app);

    if (writeInFile.is_open() == true)
    {
        writeInFile << name;
        writeInFile << "\n";
        writeInFile.flush();
        writeInFile << age << "\n";

        writeInFile.close();
    }
    else
        std::cout << "B��d otwarcia pliku\n";
}

//Odczyt zpliku tekstowego
void task2()
{
    std::string name;
    int age;
    std::ifstream readFromFile;
    readFromFile.open("c:\\dane.txt");
    if (readFromFile.is_open())
    {
        while (readFromFile.eof() == false)
        { 
            readFromFile >> name;
            readFromFile >> age;

            std::cout << "Imie: " << name << " ,wiek: " << age << "\n";
            readFromFile.close();
        }
    }
}

int main()
{
    setlocale(LC_CTYPE, "polish");
    task2();
}

/*
Dane s� buforowane, kiedy bufor si� przepe�ni wysy�a dane do pliku.
Metoda flush wymusza opr�nienie bufora.
Metoda close wywo�uje metode flush.
Kartk�wka z tego materia�u 17.10.2024.

-------------------------------------------------------------------

Proste zapisywanie danych do pliku.

Aby zapisa� jakie� dane do pliku nale�y podpi�� bibliotek� #include <fstream> ,
stworzy� zmienne i zapisa� w nich dane, nast�pnie tworzymy zmienn� ze specjaln�
klas� std::ofstream lub std::infstream. Otwieramy plik poprzez wywo�ane metody open 
(w niej ma sie znale�� �cie�ka do pliku oraz inne parametry w zale�no�ci co chcemy zrobi�).
Ma ona siedem przeci��e� -> "overload". Nast�pnie sprawdzamy czy plik zosta� otwarty 
wywo�uj�c metod� is_open zwraca on typ logiczny bool. Je�li uda�o si� otworzy� plik to 
zapisujemy do plik dane. np. writeInFile << name; Operator "<<" oznacza, �e wysy�amy z konsoli
do pliku dane. Po wykonaniu zada� zamykamy plik metod� close.

Proste odczytywanie z pliku.

Nale�y podpi�� bibliotek� #include <fstream> oraz stworzy� zmienne, kt�re pasuj� do struktury 
danych w pliku np w pliku jest: Adam 80 Ewa 20. Oznacza to, �e nale�y stworzy� zmienn� na imi� oraz 
wiek. Tworzymy zmienn� o specjalnym typie ifstream. Nast�pnie otwieramy plik metod� open.
I sprawdzamy czy uda�o si� otworzy� plik metod� is_open. Je�li si� uda�o to mo�na sprawdzi�
czy plik nie jest pusty p�tl� while, je�li jest pusty to plik si� zamknie, a je�li s� dane
to odczyta te dane z pliku poprzez specjaln� zmienn� 
np. readFromFile >> name. Operator ">>" oznacza, �e wysy�amy dane z pliku
na konsol�. Nast�pnie zamykamy plik. Aby sprawdzi� czy plik nie jest pusty wyko�ystujemy
metod� eof czyli end of file. Warunek readFromFile.eof() == false.
Kursor po otwarciu pliku ustawia si� na pocz�tku, przeskakuje on, gdy napotka pierwszy znak bia�y.

Je�li nie ma pliku to zostanie stworzony. Je�li podamy z�� �cie�k� nie istniej�cy dysk lub pomylimy
si� w folderach lub je�li nie mamy uprawnie� do otwierania, odczytywania lub modyfikacji
pliku to plik si� nie otworzy.
*/


