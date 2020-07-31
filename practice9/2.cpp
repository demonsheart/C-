#include <iostream>
#include <cstring>
using namespace std;
class Customer
{
private:
    static int TotalCustNum;
    static int Rent;
    static int Year;
    int CustID;
    char *CustName;

public:
    Customer(char *name);
    ~Customer();
    static void changeYear(int r);
    void Display();
};
int Customer::TotalCustNum = 0;
int Customer::Rent = 150;
int Customer::Year = 2014;
Customer::Customer(char *name)
{
    CustName = new char[20];
    strcpy(CustName, name);
    TotalCustNum++;
    CustID = Year * 10000 + TotalCustNum;
}
void Customer::changeYear(int r)
{
    Year = r;
}
void Customer::Display()
{
    cout << CustName << " " << CustID << " " << CustID % 10 << " " << CustID % 10 * 150 << endl;
}
Customer::~Customer()
{
    delete[] CustName;
}

int main()
{
    int t, year, c = 0;
    char *name = new char[20];
    Customer **s;
    s = new Customer *[10];
    cin >> t;
    while (t--)
    {
        cin >> year;
        Customer::changeYear(year);
        for (int i = c; i < 20; i++)
        {
            cin >> name;
            if (strcmp(name, "0") == 0)
                break;
            s[i] = new Customer(name);
            c++;
        }
    }
    for (int i = 0; i < c; i++)
        (*s[i]).Display();
    delete[] name;
    delete s;
    return 0;
}