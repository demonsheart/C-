#include <iostream>
#include <vector>
using namespace std;
class CQuad
{
private:
    int n;

public:
    CQuad(int a) : n(a) {}
    CQuad operator+(CQuad &c)
    {
        int tmp = n + c.n, sum = 0, a = 1;
        vector<int> v;
        while (tmp)
        {
            v.push_back(tmp % 10);
            tmp /= 10;
        }
        v.push_back(0); //补一位进位
        for (int i = 0; i < v.size() - 1; ++i)
        {
            if (v[i] >= 4)
            {
                v[i + 1] += 1;
                v[i] %= 4;
            }
        }
        for (int i = 0; i < v.size(); ++i)
        {
            sum = sum + a * v[i];
            a *= 10;
        }
        CQuad re(sum);
        return re;
    }
    void print() { cout << n << endl; }
};

int main()
{
    int t, tmp;
    CQuad sum(0);
    vector<CQuad> v;

    cin >> t;
    while (t--)
    {
        cin >> tmp;
        CQuad q(tmp);
        v.push_back(q);
    }
    for (int i = 0; i < v.size(); ++i)
        sum = sum + v[i];
    sum.print();
    return 0;
}