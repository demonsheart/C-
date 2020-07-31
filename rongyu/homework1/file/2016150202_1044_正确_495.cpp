#include <iostream>
#define BIG 0x7fffffff
using namespace std;
 
int main()
{
    int t, m, n, minn, maxn, **mat,i,j;
    cin >> t;
    while(t--)
    {
        minn = BIG, maxn = -BIG;
        cin >> m >> n;
        mat = new int*[m];
        for(i = 0; i < m; ++i)
        {
            mat[i] = new int[n];
            for(j = 0; j < n; ++j)
            {
                cin >> mat[i][j];
                if(mat[i][j] < minn)
                    minn = mat[i][j];
                if(mat[i][j] > maxn)
                    maxn = mat[i][j];
            }
        }
        cout << minn << " " << maxn << endl;

		for(i=0;i<m;i++)
			delete [] mat[i];

		delete [] mat;
    }
     
    return 0;
}
