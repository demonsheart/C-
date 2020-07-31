#include <iostream>
using namespace std;
 
int main()
{
    int t, n;
    char c;
    int *arrI;
    char *arrC;
    float *arrF;
 
    cin>>t;
    while(t-- > 0){
        cin>>c>>n;
        if(c == 'I'){
            arrI = new int[n];
            for(int i=0; i<n; i++)
                cin>>arrI[i];
            int sum = 0;
            for(int i=0; i<n; i++)
                sum += arrI[i];
            cout<<sum/n<<endl;
        }
        else if(c == 'C'){
            arrC = new char[n];
            for(int i=0; i<n; i++)
                cin>>arrC[i];
            char p = arrC[0];
            for(int i=0; i<n; i++){
                if(arrC[i] > p)
                    p = arrC[i];
            }
            cout<<p<<endl;
        }
        else if(c == 'F'){
            arrF = new float[n];
            for(int i=0; i<n; i++)
                cin>>arrF[i];
            float f = arrF[0];
            for(int i=0; i<n; i++){
                if(arrF[i] < f)
                    f = arrF[i];
            }
            cout<<f<<endl;
        }
    }
 
    delete[] arrI, arrC, arrF;
    return 0;
}
