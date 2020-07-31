#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.get();
    while(t--){
        char type;
        int n;
        cin>>type>>n;
        cin.get();
        switch(type){
            case 'I':{
                int *p=new int[n];
                double sum=0;
                for(int i=0; i<n; i++){
                    cin>>*(p+i);
                    sum+=*(p+i);
                }
                cin.get();
                cout<<sum/n<<endl;
            }break;
            case 'C':{
                char *p = new char[100], maxch = 'A';
                *(p+99)='\0';
                cin.get(p,100);
                for(int i=0; *p; p++){
                    if(isupper(*(p+i)) && *(p+i)>maxch)
                        maxch=*p;
                    else
                        continue;
                }
                cout<<maxch<<endl;
            }break;
            case 'F':{
                double *p=new double[n];
                cin>>*p;
                double min=*p;
                for(int i=1;i<n;i++){
                    cin>>*(p+i);
                    if(*(p+i)< min)     min = *(p+i);
                }
                cin.get();
                cout<<min<<endl;
            }break;
        }
    }
    return 0;
}

