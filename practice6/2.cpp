#include<iostream>
#include<string.h>
using namespace std;
class CDate
{
public:
    CDate(int y, int m, int d)
    {
        year = y;
        month = m;
        day = d;
        this->getWeekofDay();
    }
    void print()
        {
            string st;
            switch (week)
            {
            case 1: st = "Monday";
                break;
            case 2: st = "Tuesday";
                break;
            case 3: st = "Wednesday";
                break;
            case 4: st = "Thursday";
                break;
            case 5: st = "Friday";
                break;
            case 6: st = "Saturday";
                break;
            case 7: st = "Sunday";
                break;
            default:
                break;
            }
            cout<<month<<"/"<<day<<"/"<<year<<", "<<st<<endl;
        }
    void getWeekofDay()
        {
            int month = this->month, year = this->year;
            if(month==1)
            {
                month = 13;
                year--;
            }
            if(month==2)
            {
                month = 14;
                year--;
            }
            this->week = (day + 2*month + 3*(month+1)/5 + year + year/4 - year/100 + year/400) % 7 + 1;
        }
private:
    int month;
    int day;
    int year;
    int week;
};
int main()
{
    int n,y,m,d;
    cin>>n;
    while (n--)
    {
        cin>>y>>m>>d;
        CDate s(y,m,d);
        s.print();
    }
    return 0;
}