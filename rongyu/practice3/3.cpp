#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct rectangle
{
    int no;
    int lenth, width;
    bool operator()(rectangle r1, rectangle r2)
    {
        if (r1.no != r2.no)
            return r1.no < r2.no;
        else
        {
            if (r1.lenth != r2.lenth)
                return r1.lenth < r2.lenth;
            else
                return r1.width < r2.width;
        }
    }
};
void clearRepeated(vector<rectangle> &v, int m)
{
    vector<rectangle>::iterator it = v.begin();
    for(int i = 0; i < m-1; ++i)
    {
        if((*(it+i)).no == (*(it+1+i)).no && (*(it+i)).lenth == (*(it+1+i)).lenth && (*(it+i)).width == (*(it+1+i)).width)
        {
            v.erase(it+i+1);
            m--;
        }
    }
}
int main()
{
    int n, m;
    vector<rectangle> v;

    cin >> n;
    while (n--)
    {
        cin >> m;
        rectangle temp;
        for (int i = 0; i < m; i++)
        {
            cin >> temp.no >> temp.lenth >> temp.width;
            if (temp.lenth < temp.width)
                swap(temp.lenth, temp.width);
            v.push_back(temp);
        }
        vector<rectangle>::iterator it = v.begin();
        sort(it, it + m, rectangle());
        clearRepeated(v,m);
        for (it = v.begin(); it != v.end(); ++it)
            cout << (*it).no << " " << (*it).lenth << " " << (*it).width << endl;
        v.clear();
    }
    return 0;
}