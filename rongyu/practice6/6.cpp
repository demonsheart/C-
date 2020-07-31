#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main()
{
    int n, tmp, sum = 0, num1, num2;
    priority_queue<int, vector<int>, greater<int>> p;
    cin >> n;
    while (n--)
    {
        cin >> tmp;
        p.push(tmp);
    }
    while (p.size() > 1)
    {
        num1 = p.top();
        p.pop();
        num2 = p.top();
        p.pop();
        p.push(num1 + num2);
        sum += num1 + num2;
    }
    cout << sum << endl;
    return 0;
}