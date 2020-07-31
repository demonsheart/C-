#include <iostream>

using namespace std;

int main()
{
    int t;
    char* strAdd(char* ,char*);
    cin>>t;
    string s1,s2;
    while(t--){
        cin>>s1>>s2;
        char* s=strAdd(&s1[0],&s2[0]);
        cout<<s1<<" "<<s2<<" ";
        int j=0;
        while(1){
            if(*(s+j)=='\0'){
                break;
            }else{
                cout<<*(s+j);
                j++;
            }
        }
        cout<<endl;
    }
    return 0;
}
char *strAdd(char *s1, char *s2){
    static char* s=new char[100];
    int i=0;
    int j=0;
    while(1){
        if(*(s1+i)=='\0'){
            break;
        }else{
            *(s+j)=*(s1+i);
            i++;
            j++;
        }
    }
    i=0;
    while(1){
        if(*(s2+i)=='\0'){
            break;
        }else{
            *(s+j)=*(s2+i);
            i++;
            j++;
        }
    }
    *(s+j)='\0';
    return s;
}

