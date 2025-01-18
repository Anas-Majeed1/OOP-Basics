#include <iostream>
using namespace std;
class bank_account
{
protected:
    string account_number;
    string name;
    float balance;

public:
    float deposit, withdraw;
    void initialize()
    {
        cout << "Enter Account number: ";
        cin >> account_number;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Balance amount: ";
        cin >> balance;
    }
    void to_deposit()
    {
        cout << "Enter amount you want to deposit: ";
        cin >> deposit;
        balance = balance + deposit;
        cout << "Total Amount in account: " << balance << endl;
    }
    void to_withdraw()
    {
        cout << "Enter amount you want to withdraw: ";
        cin >> withdraw;
        if (balance > withdraw && balance > 300) //300 is minimum amount
        {
            balance = balance - withdraw;
            cout << "Total Amount in account: " << balance << endl;
        }
        else {
            cout << "Insufficient Balance" << endl;
        }
    }
};
class current_account : public bank_account
{
};
class saving_account : public bank_account
{
};
int main()
{
    char ch;
    saving_account obj;
    obj.initialize();
    cout << "\n\t\t 1. TO Deposit \t\t" << endl;
    cout << "\t\t 2.TO Withdraw \t\t" << endl;
    cout << "\n\t ----- choose your option ----- " << endl;
    cin >> ch;
    if (ch == '1')
    {
        obj.to_deposit();
    }
    else
    {
        if (ch == '2')
            obj.to_withdraw();
    }
}