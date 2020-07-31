#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        int **a = new int *[n];
        for(int i = 0; i < n; i++)
            a[i] = new int [m];
            
        int minn = 0x3f3f3f3f, maxn = - minn;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
            {
                cin >> a[i][j];
                maxn = max(maxn, a[i][j]);
                minn = min(minn, a[i][j]);
            }
            
        cout << minn << " " << maxn << endl;
        delete []a;
    }
    return 0;
}
