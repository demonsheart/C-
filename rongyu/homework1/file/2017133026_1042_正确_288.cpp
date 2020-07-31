#include <iostream>

using namespace std;

int main()
{
    int t;
    int cmp(char*,char*);
    cin>>t;
    char S[100],T[100];
    while(t--){
        cin>>S>>T;
        cout<<cmp(S,T)<<endl;
    }
    return 0;
}

int cmp(char* S,char* T){
    int cnt1=0,cnt2=0;
    int i=0;
    while(1){
        if(*(S+i)=='\0' && *(T+i)=='\0'){
            if(cnt1==cnt2){
                return 0;
            }else if(cnt1>cnt2){
                return 1;
            }else{
                return -1;
            }
        }else if(*(S+i)=='\0'){
            return -1;
        }else if(*(T+i)=='\0'){
            return 1;
        }else{
            if(*(S+i)>*(T+i)){
                cnt1++;
            }else if(*(S+i)<*(T+i)){
                cnt2++;
            }
        }
        i++;
    }
}

