#include <iostream>
using namespace std;
class Counter
{
protected:
    int value;

public:
    Counter(){};
    Counter(int v) { value = v; }
    void increment() { value++; }
};

class Rcounter : public Counter
{
private:
    int min_value, max_value;

public:
    Rcounter() {}
    Rcounter(int a, int b, int v) : min_value(a), max_value(b), Counter(v) {}
    bool increment()
    {
        if (value == max_value)
        {
            value = min_value;
            return true; //��Ҫ��λ
        }
        else
        {
            value++;
            return false;
        }
    }
    friend class CClock;
};
class CClock
{
private:
    Rcounter hour, minute, second;

public:
    CClock(int a, int b, int c) : hour(0, 23, a), minute(0, 59, b), second(0, 59, c) {}
    void print() { cout << hour.value << ":" << minute.value << ":" << second.value << endl; }
    void adds();
};
void CClock::adds()
{
    if (second.increment())
        if (minute.increment())
            hour.increment();
}
int main()
{
    int n, h, m, s, num;

    cin >> n;
    while (n--)
    {
        cin >> h >> m >> s >> num;
        CClock st(h, m, s);
        while (num--)
            st.adds();
        st.print();
    }
    return 0;
}
/*
��Ŀ����
����������࣬�����������ݳ�Աvalue,���к���increment������1��

����ѭ���������̳м������࣬����˽�����ݳ�Ա����Сֵmin_value��max_value,

��д���к���increment��ʹ��value��min_value~max_value������ѭ��+1��

����ʱ���࣬���ݳ�Ա��˽��ѭ������������Сʱhour������minute����second�����к���time(int s)���㵱ǰʱ�侭��s��֮���ʱ�䣬��hour,minute,second����valueֵ��

����ʱ����������뵱ǰʱ��;���������,����time����������ʱ�䡣

������ĿҪ�����ӱ�Ҫ�Ĺ��캯���������������������躯����

��Ϊclock��ϵͳ���ú�����Ϊ�˱����������벻Ҫʹ��clock��Ϊ�������ߺ�����

����
��һ�в��Դ���n

2��һ�飬��һ��Ϊ��ǰʱ�䣨Сʱ ���� �룩���ڶ���Ϊ������������

���
���n��

ÿ�ж�Ӧÿ�鵱ǰʱ��;������������õ�����ʱ�䣨Сʱ�����ӣ��룩��

��������
2
8 19 20
20
23 30 0
1801
�������
8:19:40
0:0:1
*/