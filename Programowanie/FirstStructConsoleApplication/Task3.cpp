#include <iostream>

struct bankAccount
{
	double balance; // stan konta
	std::string owner; //w�a�ciciel
	std::string currency; // waluta
};

void accountInformation(bankAccount &account)
{
	std::cout << "Informacje o koncie bankowym.\n";
	std::cout << "W�a�ciciel: " << account.owner << "\n";
	std::cout << "Saldo: " << account.balance << " " << account.currency << "\n\n";
}

void depositToAccount(bankAccount& account, double amount)
{
	amount = abs(amount);
	account.balance = account.balance + amount;
}

void widthDrawFromAccount(bankAccount& account, double amount)
{
	amount = abs(amount);
	account.balance = account.balance - amount;
}

void task3()
{
	bankAccount firstAccount;
	firstAccount.balance = 10000;
	firstAccount.owner = "Jan Kowalski";
	firstAccount.currency = "z�";

	accountInformation(firstAccount);

	depositToAccount(firstAccount, 500);

	accountInformation(firstAccount);


	bankAccount secondAccount;
	secondAccount.balance = 15000;
	secondAccount.owner = "Ewa Kowalska";
	secondAccount.currency = "z�";

	accountInformation(secondAccount);

	widthDrawFromAccount(secondAccount, 500);

	accountInformation(secondAccount);
}