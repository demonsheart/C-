#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    vector<int>::iterator it;
    vector<int>::iterator i;
    int n, a, min1, min2, cost = 0;
    cin >> n;
    for(int j = 0; j < n; ++j)
    {
        cin >> a;
        v.push_back(a);
    }
     while (v.size() != 1)
     { //初始化
        it = v.begin();
        min1 = *it;
        i = it;
        //寻找第一个最小
        for ( it = v.begin(); it != v.end(); ++it)
        {
            if(min1 > *it)
            {
                min1 = *it;
                i = it;
            }
        }
        v.erase(i);
        //初始化
        it = v.begin();
        min2 = *it;
        i = it;
        //寻找第二个最小
        for ( it = v.begin(); it != v.end(); ++it)
        {
            if(min2 > *it)
            {
                min2 = *it;
                i = it;
            }
        }
        v.erase(i);
        v.push_back(min1+min2);
        cost = cost + min1 + min2;
    }
    cout<<cost<<endl;
    return 0;
}