#include<cstdio>
#include<iostream>

using namespace std;

int main() {
    int t;
    int m,n;
    int * p;
    int maxn,minn;

    scanf("%d",&t);
    while(t--) {
        scanf("%d%d",&m,&n);
        p = new int[m*n];
        maxn = -999999;
        minn = 99999999;

        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                scanf("%d",&p[i*n+j]);
                if(maxn<p[i*n+j]) maxn = p[i*n+j];
                if(minn>p[i*n+j]) minn = p[i*n+j];
            }
        }

        printf("%d %d\n",minn,maxn);

        delete []p;
    }


    return 0;
}

