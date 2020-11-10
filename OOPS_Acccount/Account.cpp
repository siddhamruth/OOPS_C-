#include "Account.h"
#include<iostream>

int Account::s_AccountNumberGenerator = 1000;

Account::Account(const std::string & name, float balance):m_Name(name), m_Balance(balance)
{
	m_Acc_No = ++s_AccountNumberGenerator;
}

Account::~Account()
{
}

const std::string Account::GetName() const
{
	return m_Name;
}

float Account::GetBaalance() const
{
	return m_Balance;
}

int Account::GetAccountNumber() const
{
	return m_Acc_No;
}

float Account::GetInterestRate() const
{
	return 0.0f;
}

void Account::AccumulateInterest()
{
}

void Account::Withdraw(float amount)
{
	if (m_Balance > amount ) {
		m_Balance-= amount;
	}
	else
	{
		std::cout << "insufficient balance\n";
	}
}

void Account::Deposit(float amount)
{
	m_Balance += amount;
}
