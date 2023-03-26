#include <bits/stdc++.h>
using namespace std;

class BankAccount{
    // data members
    string name;
    long long account_no;
    string account_type;
    long long balance;

    public: 
        // methods

        // function to assign initail values
        void assign(string name, long long account_no , string account_type){
            this->name = name;
            this->account_no = account_no;
            this->account_type = account_type;
            this->balance = 0;
        }

        // to deposit an amount
        bool deposit(long long amount){
            if (amount <=0) return false;
            this->balance+= amount;
            return true;
        }

        // to withdraw an amount
        bool withdraw(long long amount){
            if (amount <= 0) return false;
            if (amount > this-> balance) return false;
            else{
                this->balance-= amount;
                return true;
            }
        }

        // display name and balance
        void display_balance(){
            cout << "name is : " <<  this->name << endl;
            cout << "balance is : " << this-> balance << endl;
        }
};

int main(int argc, char const *argv[])
{
    cout << "student details" << endl;
    cout << "name : archit jain" << endl;
    cout << "branch : btech cse b" << endl;
    cout << "rollno : 72-cseb-21" << endl;
    
    BankAccount a1;
    string name, account_type;
    long long account_no;
    cout << "enter name: ";
    cin >> name;
    cout << "enter account no: ";
    cin >> account_no;
    cout << "enter account type: ";
    cin >> account_type;
    
    cout << "assigning data !!!" << endl;
    a1.assign(name, account_no, account_type);
    
    cout << "enter money to be deposited: ";
    long long amount;
    cin >> amount;
    a1.deposit(amount);
    
    a1.display_balance();
    
    cout << "enter money to be withdraw: ";
    cin >> amount;
    a1.withdraw(amount);
    a1.display_balance();
    return 0;
}
