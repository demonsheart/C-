#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
void clear(vector<int> &v, vector<int>::iterator it)
{
    for (int i = 0; i < v.size(); ++i)
        if (*(it + i) == 0)
            v.erase(it + i);
}
int main()
{
    vector<int> v;
    int m, n, num = 0;

    cin >> m >> n;
    for (int i = 1; i < 100000; i += 2)//开足够大
        v.push_back(i);
    vector<int>::iterator it = v.begin();
    int j = 2;
    while (*(it+j-1) < n)//如果得出当前幸运数大于所需，结束循环。
    {
        int i = 1;
        int len = v.size();
        for (i = 1; i < len; ++i)
            if (i % *(it+j-1) == 0)
                *(it + i - 1) = 0;
        clear(v, it);
        j++;
    }
    for (auto x : v)
        if (x > m && x < n)
            num++;
    cout << num;
    return 0;
}