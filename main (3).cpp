#include <iostream>

using namespace std;



double balance =5000;
double depositeAmount;
double withdrawAmount;
double amount;
double accountNumber;



int option;

void checkBalance()
{
    cout<<"======================================================"<<endl;
    cout<<"Amount is R "<<balance<<endl;
}
       //The user must deposit actuall money
void deposite()
{
    cout<<"How much would you like to deposite R"<<endl;
    cin>>depositeAmount;
    balance = balance + depositeAmount;
    cout<<"======================================================"<<endl;
    cout<<"You have deposited :R "<< depositeAmount  <<endl;

    if(depositeAmount<=0)
    {
        cout<<"Amount entered can not be deposited"<<endl;
    }
    else
    {
        cout<<"Transaction succesafull"<<endl;
        cout<<"Your new balance is R "<<balance<<endl;
    }

}

         //Check if withdrawnAmount is within the users budget
void withdrawCash()
{
    cout<<"how much would you like to withdraw"<<endl;
    cin>>withdrawAmount;
    cout<<"======================================================"<<endl;

    if (balance < withdrawAmount)
    {
        cout<<"=================================================="<<endl;
        cout<<"Insurfficiant Funds"<<endl;
        cout<<"Enter smaller amount"<<endl;
    }
    else
    {
        balance= balance - withdrawAmount;
        cout<<"==================================================="<<endl;
        cout<<"Withdraw is successfull"<<endl;
        cout<<"Your current balance is R "<<balance<<endl;
    }
}
      //When Entering the Account Number Enter Six Numbers only

void sendCash()
{
    cout<<"Enter amount you would like to send"<<endl;
    cin>>amount;

    cout<<"Enter accountNumber"<<endl;
    cin>>accountNumber;


    cout<<"========================================================"<<endl;

    if(balance < amount)
    {
        cout<<"===================================================="<<endl;
        cout<<"Insurficiant funds"<<endl;
        cout<<"enter smaller amount"<<endl;
    }
    else
    {
        balance=balance - amount;
        cout<<"===================================================="<<endl;
        cout<<"Your transaction is succesfull"<<endl;
        cout<<"Amount sent is R "<<amount<< " to this account number :" <<accountNumber<<endl;
        cout<<"Your current balances is :R "<<balance<<endl;
    }
}

void menu()
{
cout<<"===============Welcome To MZANZI BANK================="<<endl;
cout<<"=====Approachable, Inclusive and Proudly Local========"<<endl;
cout<<"========================================================================="<<endl;

    cout<<"Enter 1 to check balance"<<endl;
    cout<<"Enter 2 to deposit"<<endl;
    cout<<"Enter 3 to withdraw"<<endl;
    cout<<"Enter 4 to send cash"<<endl;
    cout<<"Enter 5 to Exit"<<endl;
    cin>>option;

    switch(option)
    {
    case 1:
        checkBalance();
        break;
    case 2:
        deposite();
        break;
    case 3:
        withdrawCash();
        break;
    case 4:
        sendCash();
        break;
    case 5:
        exit(0);
        break;
    default:
        cout<<"invalid input"<<endl;
        break;
    }
}








int main()
{
    do{
            menu();
    }
    while (option != 5);
    return 0;
}
