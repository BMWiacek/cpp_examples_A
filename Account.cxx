#include "Account.hxx"

double Account::deposit(double amount)
{
    myBalance += amount;
    return (getBalance());
}

//test
double Account::debit(double amount)
{
    myBalance -= amount;
    return (getBalance());
}
