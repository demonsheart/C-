#include <iostream>
#include <string>
using namespace std;
class Group
{
public:
    virtual int add(int x, int y) = 0; //输出加法的运算结果
    virtual int sub(int x, int y) = 0; //输出减法的运算结果
};
class GroupA : public Group
{
public:
    int add(int x, int y) { return x + y; }
    int sub(int x, int y) { return x - y; }
};

class GroupB : public GroupA
{
public:
    int sub(int x, int y)
    {
        int result = 0, t = 1;
        while (x * y)
        {
            result += (x % 10 - y % 10 + 10) % 10 * t;
            x /= 10;
            y /= 10;
            t *= 10;
        }
        result += (x + y) * t;
        return result;
    }
};

class GroupC : public GroupB
{
public:
    int add(int x, int y)
    {
        int result = 0, t = 1;
        while (x * y)
        {
            result += (x % 10 + y % 10) % 10 * t;
            x /= 10;
            y /= 10;
            t *= 10;
        }
        result += (x + y) * t;
        return result;
    }
};

int main()
{
    int t, n, a, b;
    char c;
    Group *p;

    cin >> t;
    while (t--)
    {
        cin >> n >> a >> c >> b;
        if (n == 1)
        {
            p = new GroupA();
            if(c == '+')
            cout<<p->add(a,b)<<endl;
            else if(c == '-')
            cout<<p->sub(a,b)<<endl;
        }
        else if (n == 2)
        {
            p = new GroupB();
            if(c == '+')
            cout<<p->add(a,b)<<endl;
            else if(c == '-')
            cout<<p->sub(a,b)<<endl;
        }
        else if (n == 3)
        {
            p = new GroupC();
            if(c == '+')
            cout<<p->add(a,b)<<endl;
            else if(c == '-')
            cout<<p->sub(a,b)<<endl;
        }
    }
    return 0;
}