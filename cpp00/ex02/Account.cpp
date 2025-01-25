/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 14:08:02 by vcaratti          #+#    #+#             */
/*   Updated: 2025/01/25 17:24:14 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout <<	"accounts:" << Account::getNbAccounts() <<
			";total:" << Account::getTotalAmount() <<
			";deposits:" << Account::getNbDeposits() <<
			";withdrawals:" << Account::getNbWithdrawals() <<
			std::endl;
	
}

Account::Account( int initial_deposit )
{
	this->_accountIndex = this->_nbAccounts;
	this->_nbAccounts++;
	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0; 
	
	Account::_displayTimestamp();
	std::cout <<	"index:" << this->_accountIndex <<
			";amount:" << this->_amount <<
			";created" <<
			std::endl;
}

Account::~Account( void )
{
	this->_nbAccounts--;
	Account::_totalAmount -= this->_amount;
	Account::_displayTimestamp();
	std::cout <<	"index:" << this->_accountIndex <<
			";amount:" << this->_amount <<
			";closed" <<
			std::endl;
}

void	Account::makeDeposit( int deposit )
{
	int	p_amount = _amount;

	_amount = _amount + deposit;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	_nbDeposits++;
	Account::_displayTimestamp();
	std::cout <<	"index:" << this->_accountIndex <<
			";p_amount:" << p_amount <<
			";deposit:" << deposit <<
			";amount:" << this->_amount <<
			";nb_deposits:" << this->_nbDeposits <<
			std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{	
	int	p_amount = _amount;

	Account::_displayTimestamp();
	if (_amount - withdrawal < 0)
	{
		std::cout <<	"index:" << this->_accountIndex <<
				";p_amount:" << p_amount <<
				";withdrawal:refused" <<
				std::endl;
		return (1);
	}
	_nbWithdrawals++;
	Account::_totalNbWithdrawals++;
	_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	std::cout <<	"index:" << this->_accountIndex <<
			";p_amount:" << p_amount <<
			";withdrawal:" << withdrawal <<
			";amount:" << this->_amount <<
			";nb_withdrawals:" << this->_nbWithdrawals <<
			std::endl;
	return (0);
}

int	Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout <<	"index:" << this->_accountIndex <<
			";amount:" << this->_amount <<
			";deposits:" << this->_nbDeposits <<
			";withdrawals:" << this->_nbWithdrawals <<
			std::endl;
}

void	Account::_displayTimestamp( void )
{
	std::cout << "[19920104_091532] ";
}
