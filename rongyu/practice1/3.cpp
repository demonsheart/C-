#include <iostream>
#include <string>
using namespace std;
int sumWord(string s)
{
    int sum = 0;
    s.insert(0, " "); //Ô¤´¦Àí
    auto it = s.begin();
    for (it; it != s.end() - 1; it++)
    {
        if (*it == ' ' && (*(it + 1) >= 'a' && *(it + 1) <= 'z' || *(it + 1) >= 'A' && *(it + 1) <= 'Z'))
            sum++;
    }
    return sum;
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
        count = sumWord(src);
        cout << count << endl;
    }
    return 0;
}