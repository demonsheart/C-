#include <iostream>
#include <vector>
using namespace std;
template <class T>
vector<T> add(vector<T> &t1, vector<T> &t2)
{
    vector<T> re(t2);
    for (int i = 0; i < (int)t1.size(); ++i)
        re.push_back(t1[i]);
    return re;
}
template <class T>
void printv(vector<T> &v)
{
    for (auto x : v)
        cout << x;
    cout << endl;
}
int main()
{
    int t, n;
    char typ;

    cin >> t;
    while (t--)
    {
        cin >> typ >> n;
        if (typ == 'I')
        {
            int tmp;
            vector<int> v1;
            vector<int> v2;
            vector<int> result;
            for (int i = 0; i < n; ++i)
            {
                cin >> tmp;
                v1.push_back(tmp);
            }
            for (int i = 0; i < n; ++i)
            {
                cin >> tmp;
                v2.push_back(tmp);
            }
            result = add(v1, v2);
            printv(result);
        }
        else if (typ == 'D')
        {
            double tmp;
            vector<double> v1;
            vector<double> v2;
            vector<double> result;
            for (int i = 0; i < n; ++i)
            {
                cin >> tmp;
                v1.push_back(tmp);
            }
            for (int i = 0; i < n; ++i)
            {
                cin >> tmp;
                v2.push_back(tmp);
            }
            result = add(v1, v2);
            printv(result);
        }
        else if (typ == 'C')
        {
            char tmp;
            vector<char> v1;
            vector<char> v2;
            vector<char> result;
            for (int i = 0; i < n; ++i)
            {
                cin >> tmp;
                v1.push_back(tmp);
            }
            for (int i = 0; i < n; ++i)
            {
                cin >> tmp;
                v2.push_back(tmp);
            }
            result = add(v1, v2);
            printv(result);
        }
    }
    return 0;
}