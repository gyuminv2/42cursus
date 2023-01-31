#include "Account.hpp"
#include <iostream>
#include <time.h>

/*
   struct tm {
   int tm_sec;         // 초,  range 0 to 59      
   int tm_min;         // 분, range 0 to 59             
   int tm_hour;        // 시간, range 0 to 23  
   int tm_mday;        // 일, range 1 to 31  
   int tm_mon;         // 월, range 0 to 11     
   int tm_year;        // 1900년 부터의 년                
   int tm_wday;        // 요일, range 일(0) to 토(6) 
   int tm_yday;        // 1년 중 경과 일, range 0 to 365 
   int tm_isdst;       // 섬머타임 실시 여부 (양수, 0, 음수)              
   };
   */

void	Account::_displayTimestamp( void )
{
	time_t cur = time(NULL);
	struct tm *t = localtime(&cur);

	std::cout<<'['<<t->tm_year+1900<<t->tm_mon+1<<t->tm_mday<<'_' \
		<<t->tm_hour<<t->tm_min<<t->tm_sec<<"] ";
}

Account::Account( void )
{
	_accountIndex = 0;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
}

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

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout<<"accounts:"<<_nbAccounts<<';';
	std::cout<<"total:"<<_totalAmount<<';';
	std::cout<<"deposits:"<<_totalNbDeposits<<';';
	std::cout<<"withdrawals:"<<_totalNbWithdrawals<<std::endl;
}

Account::Account( int initial_deposit )
{
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;

	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex<<';';
	std::cout<<"amount:"<<_amount<<';';
	std::cout<<"created"<<std::endl;
}

Account::~Account( void )
{
	if (_amount > 0)
	{
		_displayTimestamp();
		std::cout<<"index:"<<_accountIndex<<';';
		std::cout<<"amount:"<<_amount<<';';
		std::cout<<"closed"<<std::endl;
	}
}

void    Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    std::cout<<"index:"<<_accountIndex<<';';
    std::cout<<"p_amount:"<<_amount<<';';
    std::cout<<"deposit:"<<deposit<<';';
    std::cout<<"amount:"<<_amount+deposit<<';';
    std::cout<<"nb_deposits:"<<++_nbDeposits<<std::endl;
    _amount += deposit;
    _totalAmount += deposit;
    _totalNbDeposits++;
}

bool	Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout<<"index:"<<_accountIndex<<';';
    std::cout<<"p_amount:"<<_amount<<';';
    if (_amount - withdrawal > 0)
    {
        std::cout<<"withdrawal:"<<withdrawal<<';';
        std::cout<<"amount:"<<_amount - withdrawal<<';';
        std::cout<<"nb_withdrawals:"<<++_nbWithdrawals<<std::endl;
        _amount -= withdrawal;
        _totalAmount -= withdrawal;
        _totalNbWithdrawals++;
        return (true);
    }
    else
    {
        std::cout<<"withdrawal:refused"<<std::endl;
        return (false);
    }
}

int		Account::checkAmount( void ) const
{
    return (_amount);
}

void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout<<"index:"<<_accountIndex<<';';
    std::cout<<"amount:"<<_amount<<';';
    std::cout<<"deposits:"<<_nbDeposits<<';';
    std::cout<<"withdrawals:"<<_nbWithdrawals<<std::endl;
}