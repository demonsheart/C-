#include <queue>
#include <string>
#include <iostream>
using namespace std;
int main()
{
    queue<string> F, M;
    string temp;
    char sex;
    int n;

    cin >> n;

    while (n--)
    {
        cin >> temp >> sex;
        if (sex == 'F')
            F.push(temp);
        else if (sex == 'M')
            M.push(temp);
    }
    while (!F.empty() && !M.empty())
    {
        cout << F.front() << " " << M.front() << endl;
        F.pop();
        M.pop();
    }
    if (!F.empty())
        cout << "F:" << F.size() << endl;
    if (!M.empty())
        cout << "M:" << M.size() << endl;

    return 0;
}