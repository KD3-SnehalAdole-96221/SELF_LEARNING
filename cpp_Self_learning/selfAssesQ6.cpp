// 6. Create a class BankAccount with private data members (accountNumber, 
// accountHolderName, balance). Provide public member functions to deposit, withdraw, and 
// display balance. Create an object in main() and demonstrate encapsulation by accessing 
// data only through public functions i.e. deposit(), withdraw(). 

#include <iostream>
using namespace std;
class BankAccount
{
    private:
    long long accountNumber;
    string accountHolderName;
    int Balance;
    public:
    BankAccount(void):accountNumber(0),accountHolderName(""),Balance(0)
    { }
    BankAccount(int accountNumber,int accountHolder,int Balance):accountNumber(accountNumber),accountHolderName(accountHolderName),Balance(Balance)
    { }


    void deposit(int Depos)
    {

        if(Depos>0)
        {
            Balance=Balance+Depos;
        }

    }

    void acceptRecord()
    {
        cout<<"Enter AccountNumber: "<<endl;
        cin>>accountNumber;
        cout<<"Enter AccountHolderName: "<<endl;
        cin>>accountHolderName;
        
    }
     
    
    void withdraw(int withdraw)
    {
        if(Balance<withdraw)
        {
            cout<<"Insufficient amount present in Account"<<endl;
        }
        else if(withdraw<=0)
        {
            cout<<"Invalid amount"<<endl;
        }
        else
        {
            Balance =Balance-withdraw;

        }
        
    }


    void displayBalance()
    {

        cout<<"-------------------------------------------"<<endl;
        cout<<"AccountNumber: "<<accountNumber<<endl;
        cout<<"Account Holder Name: "<<accountHolderName<<endl;
        cout<<"Balance : "<<Balance<<endl;
        cout<<"--------------------------------------------"<<endl;

        
    }
   

};

int main()
{
  BankAccount a1;

    
    a1.acceptRecord();
    int deposit;
    cout<<"Enter the amount for deposit: "<<endl;
    cin>>deposit;
    a1.deposit(deposit);
    int withdraw;
    cout<<"Enter the amount for Withdraw: "<<endl;
    cin>>withdraw;
    a1.withdraw(withdraw);
    a1.displayBalance();

    return 0;
}