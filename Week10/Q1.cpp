
#include <iostream>

using namespace std;

//Create a class named ‘Bankaccount’ with the following requirements:​
//Private two attributes named “name” and “balance”​
//Constructor to initialize the attributes​
//Public method named by “withdraw” to withdraw some money form the 
//account ​
//Public method named by “Deposit” to deposit money into the account
//
//Write a code to handle the following exceptions:​
//
//Invalid amount, ex: -100  ​
//Deposit limit exception: (maximum limit is 1000)  ​
//Withdraw limit exception: (maximum limit is 500)  ​
//Not enough balance exception​

class BankAccountException
{
private:
    string msg;
    
public:
    BankAccountException(string user_msg)
    {
        msg = user_msg;
    }
    
    void show_msg()
    {
        cout << msg << endl;
    }
};

class DepositLimitException : public BankAccountException
{
public:
    DepositLimitException() : BankAccountException("Deposit Limit Exception!") {};
};

class InvalidAmountException : public BankAccountException
{
public:
    InvalidAmountException() : BankAccountException("Invalid Amount Exception!") {};
};

class WithdrawLimitException : public BankAccountException
{
public:
    WithdrawLimitException() : BankAccountException("Withdraw Limit Exception!") {};
};

//class NotEnoughBalanceException  : public ExceptionBankAccount
//{
//public:
//    NotEnoughBalanceException : ExceptionBankAccount("Negative Amount!") {};
//}

class Bankaccount
{
private:
    string name;
    double balance;
    
public:
    Bankaccount(string name="", double balance=0)
    {
        this->name = name;
        this->balance = balance;
    }
    
    string get_name()
    {
        return name;
    }
    
    double get_balance()
    {
        return balance;
    }
    
    void set_name(string name)
    {
        this->name = name;
    }
    
    void set_balance(double balance)
    {
        this->balance = balance;
    }
    
    //Invalid amount, ex: -100  ​
    //Deposit limit exception: (maximum limit is 1000)  ​
    //Withdraw limit exception: (maximum limit is 500)  
    
    void deposit(double depositAmount)
    {
        if (depositAmount < 0)
            throw InvalidAmountException();
        if (depositAmount > 1000)
            throw DepositLimitException();
        balance += depositAmount;
    }
    
    void withdraw(double withdrawAmount)
    {
        if (withdrawAmount < 0)
            throw InvalidAmountException();
        if (withdrawAmount > 500)
            throw WithdrawLimitException();
        balance -= withdrawAmount;
    }
};

int main()
{
    Bankaccount acc1("Shirin", 1200);
    
    try
    {
        cout << acc1.get_balance() << endl;
        acc1.deposit(500);
        cout << acc1.get_balance() << endl;
        acc1.deposit(-50);
        cout << acc1.get_balance() << endl;
        
        acc1.withdraw(800);
        cout << acc1.get_balance() << endl;
        acc1.withdraw(600);
        cout << acc1.get_balance() << endl;
        acc1.withdraw(800);
        cout << acc1.get_balance() << endl;
    }
    catch(BankAccountException& e)
    {
        e.show_msg();
    }
    
    return 0;
}