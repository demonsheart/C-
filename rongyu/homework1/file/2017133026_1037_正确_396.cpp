#include <iostream>

using namespace std;

int main()
{
    int t;
    char c;
    int n;
    char *a;
    int *b;
    float *d;
    char maxa='A';
    float mind;
    int max_index;
    int min_index;
    cin>>t;
    while(t--){
        cin>>c;
        if(c=='C'){
            cin>>n;
            a=new char[n];
            for(int i=0;i<n;i++){
                cin>>*(a+i);
                if(*(a+i)>=maxa){
                    maxa=*(a+i);
                    max_index=i;
                }
            }
            cout<<*(a+max_index)<<endl;
        }else if(c=='I'){
            int sum=0;
            cin>>n;
            b=new int[n];
            for(int i=0;i<n;i++){
                cin>>*(b+i);
                sum+=*(b+i);
            }
            cout<<sum/n<<endl;
        }else if(c=='F'){
            cin>>n;
            d=new float[n];
            for(int i=0;i<n;i++){
                cin>>*(d+i);
            }
            mind=*d;
            for(int i=0;i<n;i++){
                if(*(d+i)<=mind){
                    mind=*(d+i);
                    min_index=i;
                }
            }
            cout<<*(d+min_index)<<endl;

        }
    }
    return 0;
}

