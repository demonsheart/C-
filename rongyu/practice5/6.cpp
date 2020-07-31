#include <queue>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, temp;
    vector<int> result;
    vector<int>::iterator it;
    queue<int> A, B;

    cin >> n;
    while (n--)
    {
        cin >> temp;
        if (temp % 2)
            A.push(temp);
        else
            B.push(temp);
    }

    while (!A.empty() && !B.empty())
    {
        result.push_back(A.front());
        A.pop();
        result.push_back(A.front());
        A.pop();
        result.push_back(B.front());
        B.pop();
    }
    while (!A.empty())
    {
        result.push_back(A.front());
        A.pop();
    }
    while (!B.empty())
    {
        result.push_back(B.front());
        B.pop();
    }

    for (it = result.begin(); it != result.end() - 1; ++it)
        cout << *it << " ";
    cout << *it;
    return 0;
}