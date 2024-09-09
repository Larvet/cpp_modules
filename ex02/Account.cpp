/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:14:23 by locharve          #+#    #+#             */
/*   Updated: 2024/09/09 19:13:36 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Account.hpp"
#include	<iostream>

// non-member fonctions

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	std::cout << "[DATE_HOUR]"; //////////////////
	std::cout << " accounts:" << Account::getNbAccounts();
	std::cout << ";total:" << Account::getTotalAmount();
	std::cout << ";deposits:" << Account::getNbDeposits();
	std::cout << ";withdrawals:" << Account::getNbWithdrawals();
	std::cout << std::endl;
}

// constructor / destructor

Account::Account(int initial_deposit)
{
	static int	index = 0;

	this->_accountIndex = index;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	std::cout << "[DATE_HOUR]"; /////////////
	std::cout << " index:" << this->_accountIndex; //
	std::cout << ";amount:" << this->_amount;
	std::cout << ";created";
	std::cout << std::endl;
	Account::_nbAccounts++;
	index++;
}

Account::~Account(void)
{
	std::cout << "[DATE_HOUR]"; ////////////
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";closed";
	std::cout << std::endl;
	Account::_nbAccounts--;
} 

// member fonctions

void	Account::makeDeposit(int deposit)
{
	std::cout << "[DATE_HOUR]"; //////////////////
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount; //
	std::cout << ";deposit:" << deposit;

	this->_amount += deposit;
	this->_nbDeposits++;

	std::cout << ";amount:" << this->_amount;
	std::cout << ";nb_deposits:" << this->_nbDeposits;
	std::cout << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	std::cout << "[DATE_HOUR]"; //////////////////
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount; //
	std::cout << ";withdrawal:"; //
	if (withdrawal <= checkAmount())
	{
		std::cout << withdrawal;
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		std::cout << ";amount:" << this->_amount;
		std::cout << ";nb_withdrawals:" << this->_nbWithdrawals;
	}
	else
		std::cout << "refused";
	std::cout << std::endl;
	return (withdrawal <= checkAmount());
}

int	Account::checkAmount(void) const
{
	return (this->_amount);
}

void	Account::displayStatus(void) const
{
	std::cout << "[DATE_HOUR]"; //////////////////
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount; //
	std::cout << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals;
	std::cout << std::endl;
}