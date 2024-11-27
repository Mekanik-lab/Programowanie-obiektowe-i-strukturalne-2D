#pragma once
#include "BankAccount.h"

class SavingBankAccount : public BankAccount
{
	double interestRate; // oprocentowanie

public:

	SavingBankAccount() //: BankAccount()
	{
		interestRate = 0.05;
	}

	SavingBankAccount(double b, std::string o, std::string c, double ir) : BankAccount(b, o, c)
	{
		interestRate = ir;
	}

	void CalculateInterestRate()
	{
		balance = balance + balance * interestRate;
	}
};

/*
Modyfikatory dostepu: 
public - cz�onek jejest dost�pny tylko w obrst dost�pny dla wszystkich (zar�wno zewn�trznych klas, jak i w obr�bie tej samej klasy).
private - Cz�onek �bie tej klasy (nie jest dost�pny w klasach pochodnych ani spoza klasy).
protected - Cz�onek jest dost�pny w obr�bie klasy, a tak�e w klasach pochodnych 
(czyli w klasach dziedzicz�cych), ale nie jest dost�pny dla innych klas.

Aby stworzy� klasi� dziedziczn�, nale�y stworzy� now� klas� i po jej nazwie w pliku h wpisa� 
: public (NazwaKlasyBazowej) i dopisa� nowe cechy do klasy dziedzicznej. 
Klasa dziedziczna jest tworzona w nast�puj�cy spos�b: 
-Wywo�anie konstruktora klasy bazowej
-Inicjalizacja sk�adnik�w(cech, p�l) klasy dziedzicznej
-Wywo�anie konstruktora klasy dziedzicznej

Aby wywo�a� odpowiedni konstruktor bazowy nale�y przy konstruktorze parametrowym klasy dziedzicznej
wpisa� nazw� konstruktora bazowego z parametrami: 

    SavingBankAccount(double b, std::string o, std::string c, double ir) : BankAccount(b, o, c)
	{
		interestRate = ir;
	}

BEZ NAWIAS�W KWADRATOWYCH TO TYLO DLA ZAZNACZENIA CO DO KT�REGO KONSTRUKTORA!
Aby wywo�a� konstruktor parametrowy nale�y np. SavingBankAccount firstAccount([1000, "Ewa", "z�"] konstruktor bazowy, 0.05);
Tworz�c cia�o konstrukotra w pliku cpp nale�y napisa� nazw� klasy dwa dwukropki :: i nazw� konstrukotra z parametrami

Metody mo�na przes�ania�, przes�onienie polega na tym, �e w klasie bazowej i dziedzicznej istnieje
metoda o takim samym nag��wku oraz zestawie parametr�w i gdy wywo�ujemy metod� dla obiektu klasy dziedzicznej
to wywo�ywana jest metoda, kt�ra jest w klasie dziedzicznej. Ale je�li chcemy wywo�a� tak� sam� metod� z
klasy dziedzicznej i bazowej to nale�y napisa� przed metod� z klasy nazw� klasy bazowej np.
void AccountInformation()  klasa dziedziczna(metoda)
{
	BankAccount::AccountInformation(); klasa bazowa (metoda) 
	cout << "hi";
}

Mo�na dziedziczy� wi�cej ni� po klasie bazowej, mo�na po przecinku doda� inn� klas� (raczej nie robi� wielodziedziczenia)
*/