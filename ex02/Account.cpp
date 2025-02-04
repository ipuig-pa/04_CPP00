/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 17:31:56 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/02/04 18:00:40 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

//delete log file
//FORMAT timestamp

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
	: _accountIndex(Account::_nbAccounts), _amount(initial_deposit), _nbDeposits (0), _nbWithdrawals(0)
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->Account::_accountIndex 
	<< ";amount:" << this->Account::_amount << ";created" << std::endl;
	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
}

Account::~Account( void )
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->Account::_accountIndex 
	<< ";amount:" << this->Account::_amount << ";closed" << std::endl;
	Account::_nbAccounts--;
	Account::_totalAmount -= this->Account::_amount;
}

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
	std::cout << " accounts:" << Account::getNbAccounts() 
	<< ";total:" << Account::getTotalAmount() << ";deposits:" << Account::getNbDeposits() 
	<< ";withdrawals: " << Account::getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex 	<< ";p_amount:" << this->_amount - deposit 
	<< ";deposit:" << deposit << ";amount:" << this->_amount << ":nb_deposits:" << this->_nbDeposits << std::endl;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (this->_amount - withdrawal >= 0)
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_displayTimestamp();
		std::cout << " index:" << this->_accountIndex 	<< ";p_amount:" << this->_amount + withdrawal 
		<< ";withdrawal:" << withdrawal << ";amount:" << this->_amount << ":nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals++;
		return (true);
	}
	else
	{
		Account::_displayTimestamp();
		std::cout << " index:" << this->_accountIndex 	<< ";p_amount:" << this->_amount << ";withdrawal:refused" << std::endl;
		return (false);
	}
}

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount 
	<< ";deposits:" << this->_nbDeposits << ";withdrawals: " << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
	std::time_t	timestamp = std::time(nullptr);

	std::cout << "[" << timestamp << "]";
}