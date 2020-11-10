#include "Savings.h"

Savings::Savings(const std::string & name, float balance, float Rate):Account(name,balance),m_Rate(Rate)
{
}

Savings::~Savings()
{
}

float Savings::GetInterestRate() const
{
	return m_Rate;
}

void Savings::AccumulateInterest()
{
	m_Balance += (m_Balance*m_Rate);
}
