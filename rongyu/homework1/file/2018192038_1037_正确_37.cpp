#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int t,j,num;
    char ch,a;
    char *c;
    int *i;
    float *f,sum,th;
    cin>>t;
    cin.ignore(1000,'\n');
    while(t--){
        cin>>ch>>num;
        if(ch=='C'){
            c=new char[num];
            for(j=0;j<num;j++){
                cin>>c[j];
            }
            a=c[0];
            for(j=0;j<num;j++){
                if(c[j]>a){
                    a=c[j];
                }
            }
            cout<<a<<endl;
        }
        else if(ch=='I'){
            i=new int[num];
            for(j=0;j<num;j++){
                cin>>i[j];
            }
            sum=0;
            for(j=0;j<num;j++){
                sum+=i[j];
            }
            cout<<sum/num<<endl;
        }
        else if(ch=='F'){
            f=new float[num];
            for(j=0;j<num;j++){
                cin>>f[j];
            }
            th=f[0];
            for(j=0;j<num;j++){
                if(f[j]<th){
                    th=f[j];
                }
            }
            cout<<fixed<<setprecision(1)<<th<<endl;
        }
    }

    //cin.get();cin.get();
    return 0;
}

