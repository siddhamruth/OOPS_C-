#include "Checking.h"
#include<iostream>

//Checking::Checking(const std::string Name, float amount):Account(Name, amount)
//{
//}

Checking::~Checking()
{
}

void Checking::Withdraw(float amount)
{
	if (amount < (m_Balance - 50)) {
		Account::Withdraw(amount);
	}
	else {
		std::cout << "Invalid Amount from checkin account\n";
	}
}
