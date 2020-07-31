#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int t,i,j,k;
    int len[3],alen;
    char a[3][11];
    char *p;
    int b[3][2];
    cin>>t;
    cin.ignore(1000,'\n');
    while(t--){
        alen=0;
        for(i=0;i<3;i++){
            cin>>a[i];
        }
        for(i=0;i<3;i++){
            for(j=0;j<2;j++){
                cin>>b[i][j];
            }
            len[i]=b[i][1]-b[i][0]+1;
            alen+=len[i];
        }
        p=new char[alen];
        k=0;
        for(i=0;i<3;i++){
            for(j=b[i][0]-1;j<b[i][1];j++){
                p[k]=a[i][j];
                k++;
            }
        }
        for(i=0;i<alen;i++){
            cout<<p[i];
        }
        cout<<'\n';
        }

    //cin.get();cin.get();
    return 0;
}

