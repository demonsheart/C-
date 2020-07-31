#include <iostream>
#include <string>
using namespace std;
int sumAlpha(string s)
{
    int num = 0;
    for (auto x : s)
    {
        if (x >= 'a' && x <= 'z' || x >= 'A' && x <= 'Z')
            num++;
    }
    return num;
}
int main()
{
    int t, count;
    string src;

    cin >> t;

    getchar();
    while (t--)
    {
        getline(cin, src);
        count = sumAlpha(src);
        cout << count << endl;
    }
    return 0;
}