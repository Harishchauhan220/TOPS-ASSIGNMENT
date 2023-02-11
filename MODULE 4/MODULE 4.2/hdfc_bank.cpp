/*HDFC BANK*/

#include<iostream>
#include<string.h>
using namespace std;

class HDFCBANK
{
    protected:
    string name;
    int account_no,balance_amount,deposite_amount,withdraw_amount,total_balance;

    public:

    void accountholdersname()
    {
        cout<<"Account holder's Name : ";
        cin>>name;
    }
    void accountnumber()
    {
        cout<<"Account number is :";
        cin>>account_no;
    }
    void typeofacc()
    {
        cout<<"Type of account is : CURRENT ACCOUNT "<<endl;
    }
    void balance()
    {
        cout<<"Balance in account is : Rs.";
        cin>>balance_amount;
    }
    void depositeamount()
    {
        cout<<"Deposite amount is : Rs."; 
        cin>>deposite_amount;
        cout<<"Total amount after deposite is : Rs."<<balance_amount+deposite_amount<<endl;
    }
    void withdraw()
    {
        cout<<"Withdraw amount is : Rs.";
        cin>>withdraw_amount;
    }
    void Totalbalance()
    {
        name="HARISH CHAUHAN";
        total_balance=balance_amount+deposite_amount-withdraw_amount;

        cout<<"\nACCOUNT HOLDER'S NAME IS : "<<name<<endl;
        cout<<"\nTotal balance is : Rs. "<<total_balance<<endl;

    }
};
int main()
{
    HDFCBANK r;
    r.accountholdersname();
    r.accountnumber();
    r.typeofacc();
    r.balance();
    r.depositeamount();
    r.withdraw();
    r.Totalbalance();
}