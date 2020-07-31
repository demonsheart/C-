#include <iostream>
#include <iomanip>
using namespace std;
class CDate
{
private:
    int year, month, day;

public:
    CDate() {}
    CDate(int t)
    {
        year = t / 10000;
        month = (t / 100) % 100;
        day = t % 100;
    }
    operator int()
    {
        return year * 10000 + month * 1000 + day;
    }
    void Print()
    {
        cout << year << "��"
             << setw(2) << setfill('0') << month << "��"
             << setw(2) << setfill('0') << day << "��" << endl;
    }
};

int main()
{
    int t, t1, t2;
    CDate C1, C2;
    cin >> t;
    while (t--)
    {
        cin >> t1 >> t2;
        C1 = t1;
        C2 = t2;
        ((C1 > C2) ? C1 : C2).Print(); //���ڴ��������ڴ���C1>C2�У����Զ���C1��C2ת��Ϊ�������бȽ�
    }
    return 0;
}