#pragma once
#include "Account.h"
class Checking :
	public Account
{
public:
	using Account::Account; //inherits constructor of base class to child class
	//Checking( const std::string Name , float amount); //commenting this as we can use the above line sor simple coding
	~Checking();
	void Withdraw(float amount);
};

