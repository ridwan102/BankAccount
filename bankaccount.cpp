#include <iostream>
#include <string>
#include <cassert>

class BankAccount
{
  private:
      // TODO: declare member variables
    long int account_num;
    float funds;
    std::string owner;

  public:
      // TODO: declare setters
      void setAccount_Num(long int account_num);
      void setFunds(float funds);
      void setOwner(std::string owner);
    
      // TODO: declare getters
      long int getAccount_Num() const;
      float getFunds() const;
      std::string getOwner() const;
};

// TODO: implement setters
// Implementation of Set methods:
void BankAccount::setAccount_Num(long int account_num) {
    // Changing attribute to incoming value
    BankAccount::account_num = account_num;
}

void BankAccount::setFunds(float funds) {
    BankAccount::funds = funds;
}

void BankAccount::setOwner(std::string owner) {
    BankAccount::owner = owner;
}

// TODO: implement getters
// Implementation of Get methods:
long int BankAccount::getAccount_Num() const {
    // Getting specified attribute
    return BankAccount::account_num;
}

float BankAccount::getFunds() const {
    return BankAccount::funds;
}

std::string BankAccount::getOwner() const {
    return BankAccount::owner;
}


int main(){
    // TODO: instantiate and output a bank account
  BankAccount bankaccount;
    
  bankaccount.setAccount_Num(398489298);
  bankaccount.setFunds(3583);
  bankaccount.setOwner("Bob");
    
  std::cout << "Hi " << bankaccount.getOwner() << std::endl;
  std::cout << "Your Bank Account Number is: " << bankaccount.getAccount_Num() << std::endl;
  std::cout << "Your available funds are: " << bankaccount.getFunds() << std::endl;
}