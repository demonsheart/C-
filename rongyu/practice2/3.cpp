#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        vector<int> v;
        int s = 0; //计数器
        for (int i = 0; i <= 2 * n; ++i)
            v.push_back(i);
        vector<int>::iterator it;
        it = v.begin();
        for (int i = 0; i < n; ++i)
        {
            while (1)
            {
                ++it;              //报数
                ++s;               //计数
                if (it == v.end()) //如果到达末尾，指针回跳
                    it = v.begin() + 1;
                if (s == m) //报数为m，开始磨刀
                {
                    v.erase(it);         //kill
                    s = 0;               //计数器清零
                    it--;                //指针回到上一位，为下次做准备
                    if (it == v.begin()) //如果到达首端，跳转
                        it = v.end() - 1;
                    break;
                }
            }
        }
        for (int i = 1; i <= 2 * n; i++)
        {
            int flag = 1;
            for (it = v.begin(); it != v.end(); ++it)
            {
                if (i == *it)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
                cout << "B";
            else
                cout << "G";
        }
        cout << endl;
    }
    return 0;
}