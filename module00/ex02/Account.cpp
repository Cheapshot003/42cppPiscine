#include "Account.hpp"
#include <ctime>
#include <string>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
  _nbAccounts++;
  _accountIndex = _nbAccounts - 1;
  _nbDeposits = 0;
  _nbWithdrawals = 0;
  _displayTimestamp();
  _amount = initial_deposit;
  std::cout << "index:" << _accountIndex <<";amount:" << _amount << ";created\n";
  
  return;
}

Account::~Account()
{
  _displayTimestamp();
  std::cout << "index:" << _accountIndex <<";amount:" << _amount << ";closed\n";
}

void Account::makeDeposit(int deposit)
{
  _displayTimestamp();
  _nbDeposits++;
  _totalNbDeposits++;
  std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit << ";amount:" << (deposit + _amount) << ";nb_deposits:" << _nbDeposits << "\n"; 
  _amount += deposit;
  _totalAmount += deposit;
  return;
}

bool Account::makeWithdrawal(int withdrawal)
{
  _displayTimestamp();
  if (_amount - withdrawal < 0)
  {
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused\n";
    return false;
  }
  else
  {
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:" << withdrawal << ";amount:" << (_amount - withdrawal) << ";nb_withdrawals:" << _nbWithdrawals << "\n";
    _amount = _amount - withdrawal;
    _totalAmount = _totalAmount - withdrawal;
    return true;
  }

}

int Account::checkAmount (void) const
{
  return(_amount);
}

void Account::displayStatus(void) const
{
  _displayTimestamp();
  std::cout << "index:" << _accountIndex << ";total:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << "\n";
}

int Account::getNbAccounts(void)
{
  return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
  return (_totalAmount);
}

int Account::getNbDeposits(void)
{
  return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
  return(_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
  _displayTimestamp();
  std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << "\n";
  return;
}

void Account::_displayTimestamp(void)
{
  std::string timestamp = "[";
  time_t now = time(0);

  tm *ltm = localtime(&now);

  std::cout << "[" << std::setw(4) << std::setfill('0') << (ltm->tm_year + 1900)
              << std::setw(2) << std::setfill('0') << (ltm->tm_mon + 1)
              << std::setw(2) << std::setfill('0') << ltm->tm_mday << "_"
              << std::setw(2) << std::setfill('0') << ltm->tm_hour
              << std::setw(2) << std::setfill('0') << ltm->tm_min
              << std::setw(2) << std::setfill('0') << ltm->tm_sec << "] ";
}
