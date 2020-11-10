#pragma once
#include<string>

class Account
{
	std::string m_Name;
	int m_Acc_No;
	static int s_AccountNumberGenerator;
protected:
	float m_Balance;
public:
	Account(const std::string &name, float balance);
	~Account();
	const std::string GetName() const;
	float GetBaalance() const;
	int GetAccountNumber() const;
	float GetInterestRate() const;

	void AccumulateInterest();
	void Withdraw(float amount);
	void Deposit(float amount);

};

