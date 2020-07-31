#include <iostream>

using namespace std;

int main()
{
    int t;
    char s1[11],s2[11],s3[11];
    int pos1,pos2;
    int l1,l2,l3,l;
    cin>>t;
    while(t--){
        l=0;
        cin>>s1>>s2>>s3;
        cin>>pos1>>pos2;
        l1=(pos2-pos1+1);
        char *s1_new=new char[pos2-pos1+1];
        char *temp=s1_new;
        for(int i=pos1-1;i<pos2;i++){
            *temp=*(s1+i);
            temp++;
        }
        cin>>pos1>>pos2;
        l2=(pos2-pos1+1);
        char *s2_new=new char[pos2-pos1+1];
        temp=s2_new;
        for(int i=pos1-1;i<pos2;i++){
            *temp=*(s2+i);
            temp++;
        }

        cin>>pos1>>pos2;
        l3=(pos2-pos1+1);
        char *s3_new=new char[pos2-pos1+1];
        temp=s3_new;
        for(int i=pos1-1;i<pos2;i++){
            *temp=*(s3+i);
            temp++;
        }
        l=l1+l2+l3;
        char *s=new char[l];
        temp=s;
        for(int i=0;i<l1;i++){
            *temp=*(s1_new+i);
            temp++;
        }
        for(int i=0;i<l2;i++){
            *temp=*(s2_new+i);
            temp++;
        }
        for(int i=0;i<l3;i++){
            *temp=*(s3_new+i);
            temp++;
        }
        for(int i=0;i<l;i++){
            cout<<*(s+i);
        }
        cout<<endl;
    }
    return 0;
}

