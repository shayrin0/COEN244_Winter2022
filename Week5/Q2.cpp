
#include <iostream> 
using namespace std;

class Balance
{
public:
    Balance()
    {
        balance = 0;
    }
    
    void setBalance(float balance)
    {   
        this->balance = balance;
    }
    
    float getBalance()
    {
        return balance;
    }
    
    friend void addSpecialAmount(Balance &b, float amount);
    
private:
    float balance;
    
//    friend void addSpecialAmount(Balance &b, float amount);
};

void addSpecialAmount(Balance &b, float amount)
{
//    float result=0;
    if (amount >0)
//        balance of obj + amount
//        result = result + b.getBalance() + amount;
        b.balance += amount;
    else
        cout << "You can't add the amount to the balance\n";
}

int main()
{
    Balance new_b;
    
    new_b.setBalance(30);
    
    cout << "The balance = " << new_b.getBalance() << endl;
    
    addSpecialAmount(new_b, 40);
    
    cout << "The balance = " << new_b.getBalance() << endl;
    
    return 0;
}