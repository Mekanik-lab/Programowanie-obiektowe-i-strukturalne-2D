#include <iostream>
#include "SavingBankAccount.h"

int main()
{
    setlocale(LC_CTYPE, "polish");
    SavingBankAccount savingBankAccount(10000, "Ewa", "z�", 0.05);
    savingBankAccount.AccountInformation();
}
