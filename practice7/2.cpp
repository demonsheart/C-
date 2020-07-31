#include<iostream>
using namespace std;
class bank
{
private:
    int id, phone, password, balance;
public:
    bank(){};
    void getData(int id,int phone,int password,int balance);
    int withdraw(int money);
    int getID();
    int getPhone();
    int getPassword();
    int getBalance();
};

void bank::getData(int id,int phone,int password,int balance)
{
    this->id = id;
    this->phone = phone;
    this->password = password;
    this->balance = balance;
}
int bank::withdraw(int money)
{
    if(balance-money >= 0)
    {
        balance -= money;
        return 1;
    }
    else
     return 0;
}
int bank::getID()
{
    return id;
}
int bank::getPhone()
{
    return phone;
}
int bank::getPassword()
{
    return password;
}
int bank::getBalance()
{
    return balance;
}
int main()
{
    int n, k, id, phone, password, balance, result, money;
    cin>>n;
    bank b[n];
    for (int i = 0; i < n; i++)
    {
        cin>>id>>phone>>password>>balance;
        b[i].getData(id,phone,password,balance);
    }
    cin>>k;
    while (k--)
    {
        int i,flag = 0;
        cin>>phone>>password>>money;
        for(i=0; i<n; i++)
        {
            if(phone == b[i].getPhone())
            {
                flag = 1;
                break;
            }
        }
        if(flag==0)
            cout<<"ÊÖ»úºÅ²»´æÔÚ"<<endl;
        else
        {
            if(password != b[i].getPassword())
             cout<<"ÃÜÂë´íÎó"<<endl;
            else
            {
                result = b[i].withdraw(money);
                if(result)
                 cout<<"¿¨ºÅ"<<b[i].getID()<<"--Óà¶î"<<b[i].getBalance()<<endl;
                else
                 cout<<"¿¨ºÅ"<<b[i].getID()<<"--Óà¶î²»×ã"<<endl;
            } 
        }   
    }
    return 0;
}