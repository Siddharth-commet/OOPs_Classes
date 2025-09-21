#include<iostream>
using namespace std;
class Recipient;
class Donor{
    string Donor_name;
    double balance;
    public:
    void set_details(string name, double amount){
        Donor_name = name;
        balance = amount;
    }

    void display(){
        cout<<"donor name: "<<Donor_name<<endl;
        cout<<"current balance: "<<balance<<endl;
    }

    double get_balance(){
        cout<<"current balance: "<<balance<<endl;
        return balance;
    }
    friend void transfer(Donor &donor, Recipient &recipient, double amount);
};

class Recipient{
    string recipient_name;
    double account_balance;
    double amount_required;
    public:
    void set_details(string name, double balance, double amount){
        recipient_name = name;
        account_balance = balance;
        amount_required = amount;
    }
    void display(){
        cout<<"recepient name: "<<recipient_name<<endl;
        cout<<"current balance: "<<account_balance<<endl;
        cout<<"required amount: "<<amount_required<<endl;
    }
    double get_balance(){
        cout<<"current balance: "<<account_balance<<endl;
        return account_balance;

    }
    friend void transfer(Donor &donor, Recipient &recipient, double amount);
};

void transfer(Donor &donor, Recipient &recipient, double amount){
    if (amount> donor.get_balance()){
        cout<<"Sorry insufficient funds!!";
    }
    else{
        donor.balance-=amount;
        recipient.account_balance+=amount;
        recipient.amount_required=0;
        cout<<"Transfer successful"<<endl;
    }
}

int main(){
    Donor D;
    Recipient R;
    D.set_details("Sid",100000);
    R.set_details("Tub",0,1000);
    transfer(D,R,1000);
    D.display();
    R.display();
    return 0;
}