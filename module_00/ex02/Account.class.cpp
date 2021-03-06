#include <ctime>
#include <iostream>
#include "Account.class.hpp"

#define ENSURE_DOUBLE_DIGIT(number) ((number < 10) ? "0" : "") << number

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
    this->_accountIndex = Account::getNbAccounts();
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

    Account::_nbAccounts++;
	Account::_totalAmount += this->_amount;
    
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" <<
    this->_amount << ";created" << std::endl;
}

Account::~Account() {
    this->_nbAccounts--;
    this->_totalAmount -= this->_amount; 
	this->_totalNbDeposits -= this->_nbDeposits;
	this->_totalNbWithdrawals -= this->_nbWithdrawals;

    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" <<
    this->_amount << ";closed" << std::endl;
}

Account::Account(void) {
    this->_accountIndex = Account::getNbAccounts();
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

    Account::_nbAccounts++;

    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" <<
    this->_amount << ";created" << std::endl;
}

int	Account::getNbAccounts( void ) { return (Account::_nbAccounts); }
int	Account::getTotalAmount( void ) { return (Account::_totalAmount); }
int	Account::getNbDeposits( void ) { return (Account::_totalNbDeposits); }
int	Account::getNbWithdrawals( void ) { return (Account::_totalNbWithdrawals); }

void	Account::displayAccountsInfos( void ) {
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::getNbAccounts() << ";total:" <<
    Account::getTotalAmount() << ";deposits:" << Account::getNbDeposits() << 
    ";withdrawals:" <<Account::getNbWithdrawals() << std::endl;
}

void	Account::displayStatus( void ) const {
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount <<
    ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals 
    << std::endl; 
}

void	Account::_displayTimestamp( void ) {
    std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);

    std::cout
		<< "["
		<< (now->tm_year + 1900)
        << ENSURE_DOUBLE_DIGIT((now->tm_mon + 1))
        << ENSURE_DOUBLE_DIGIT(now->tm_mday)
		<< "_"
        << ENSURE_DOUBLE_DIGIT(now->tm_hour)
        << ENSURE_DOUBLE_DIGIT(now->tm_min)
        << ENSURE_DOUBLE_DIGIT(now->tm_sec)
        << "] ";
}


void	Account::makeDeposit( int deposit ) {
    if (deposit < 0)
        return ;
    int original = this->_amount;

    this->_amount += deposit;
    this->_nbDeposits++;

    Account::_totalAmount += deposit;
    Account::_totalNbDeposits++;

    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << original <<
    ";deposit:" << deposit << ";amount:" << this->_amount << ";nb_deposits:" <<
    this->_nbDeposits << std::endl; 
}

bool	Account::makeWithdrawal( int withdrawal ) {
    if (withdrawal < 0)
        return false;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:";
    if (this->_amount >= withdrawal)
    {
        this->_amount -= withdrawal;
        this->_totalAmount -= withdrawal;
        this->_nbWithdrawals++;
        this->_totalNbWithdrawals++;   
        std::cout << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" <<
        this->_nbWithdrawals << std::endl;
        return true;
    }
    else {
        std::cout << "refused" << std::endl;
        return false;
    }
}

