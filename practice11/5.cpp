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
            return true; //需要进位
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