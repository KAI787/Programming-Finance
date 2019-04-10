
#pragma once
#include<string>
#include<time.h>
#include<iostream>
#include<fstream> 

#ifndef ACCOUNT_kg_H
#define ACCOUNT_kg_H
// base class - Account
class Account
{
public:
	virtual void printTrans() = 0;
	double getCashRemain();// getting and setting cash balance.
	void setCashRemain();
	double CashBalance;// Data member accessed from both StockAccount and BankAccount classes
};
#endif
