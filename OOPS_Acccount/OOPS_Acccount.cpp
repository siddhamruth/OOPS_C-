// OOPS_Acccount.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Account.h"
#include "Checking.h"

int main()
{
    std::cout << "Hello World!\n";
	Checking acc("Amruth", 1000);
	std::cout << "Initial balance: " << acc.GetBaalance()<<std::endl;
	acc.Deposit(500);
	acc.Withdraw(1475);
	std::cout << "Balance: " << acc.GetBaalance() << std::endl;
	return 0;
}
