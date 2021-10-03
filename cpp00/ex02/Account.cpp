// ************************************************************************** //
//                                                                            //
//                Account.cpp for GlobalBanksters United                      //
//                Created on  : Sat Oct 02 17:44:02 2021                      //
//                Last update : Sat Oct 02 17:44:02 2021                      //
//                Made by : Jacopo "Fabulous" fabi <jfbi>                     //
//                                                                            //
// ************************************************************************** //

#include "Account.hpp"
#include <iostream>
#include <time.h>

int Account::_nbAccounts;
int Account::_totalAmount;
int Account::_totalNbDeposits;
int Account::_totalNbWithdrawals;

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts();
	std::cout << ";";
	std::cout << "total:" << getTotalAmount();
	std::cout << ";";
	std::cout << "deposits:" << getNbDeposits();
	std::cout << ";";
	std::cout << "withdrawals:" << getNbWithdrawals();
	std::cout << std::endl;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";";
	std::cout << "amount:" << _amount;
	std::cout << ";";
	std::cout << "deposits:" << _nbDeposits;
	std::cout << ";";
	std::cout << "withdrawals:" << _nbWithdrawals;
	std::cout << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";";
	std::cout << "p_amount:" << _amount;
	std::cout << ";";
	std::cout << "deposit:" << deposit;
	std::cout << ";";
	_amount = _amount + deposit;
	_nbDeposits = _nbDeposits + 1;
	std::cout << "amount:" << _amount;
	std::cout << ";";
	std::cout << "nb_deposits:" << _nbDeposits;
	std::cout << std::endl; 
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";";
	std::cout << "p_amount:" << _amount;
	std::cout << ";";
	if (_amount < withdrawal)
	{
		std::cout << "withdrawal:" << "refused";
		std::cout << std::endl;
		return (false);
	}
	std::cout << "withdrawal:" << withdrawal;
	std::cout << ";";
	_amount = _amount - withdrawal;
	_nbWithdrawals = _nbWithdrawals + 1;
	std::cout << "amount" << _amount;
	std::cout << ";";
	std::cout << "nb_withdrawals" << _nbWithdrawals;
	std::cout << std::endl;
	return (true);
}

Account::Account(int initial_deposit)
{
	_displayTimestamp();
	_amount = initial_deposit;
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_totalAmount += _amount;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	std::cout << "index:" << _accountIndex;
	std::cout << ";";
	std::cout << "amount" << _amount;
	std::cout << ";";
	std::cout << "created";
	std::cout << std::endl;
}

Account::Account(void)
{
	_displayTimestamp();
	_amount = 0;
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	std::cout << "index:" << _accountIndex;
	std::cout << ";";
	std::cout << "amount" << _amount;
	std::cout << ";";
	std::cout << "created";
	std::cout << std::endl;
}

Account::~Account( void )
{
	_displayTimestamp();
	_nbAccounts--;
	_totalNbWithdrawals -= _nbWithdrawals;
	_totalNbDeposits -= _nbDeposits;
	_totalAmount -= _amount;
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed" << std::endl;
	return ;
}

void	Account::_displayTimestamp(void)
{
	time_t	goTime;
	tm		*hereTime;

	time(&goTime);
	hereTime = localtime(&goTime);
	std::cout << "[" << 1900 + hereTime->tm_year << hereTime->tm_mon + 1 \
	<< hereTime->tm_mday << "_" << hereTime->tm_hour << hereTime->tm_min \
	<< hereTime->tm_sec << "] ";
}

// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //