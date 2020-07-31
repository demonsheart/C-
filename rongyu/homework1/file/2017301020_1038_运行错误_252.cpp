#include <iostream>
using namespace std;

int main(){
    int t,i,arraysize=100,flag,start1,start2,start3,finish1,finish2,finish3;
    char s1[20],s2[20],s3[20];
    cin>>t;
    while(t--){
        cin.get();
        cin.getline(s1,20);
        cin.getline(s2,20);
        cin.getline(s3,20);
        cin>>start1>>finish1;
        cin>>start2>>finish2;
        cin>>start3>>finish3;
        char *p1,*p2,*p3;
        char *p4=new char[arraysize];
        p1=s1;p2=s2;p3=s3;flag=0;
        for(i=start1-1;i<finish1;i++){
            p4[flag]=p1[i];
            flag++;
        }
        for(i=start2-1;i<finish2;i++){
            p4[flag]=p2[i];
            flag++;
        }
        for(i=start3-1;i<finish3;i++){
            p4[flag]=p3[i];
            flag++;
        }
        p4[flag]='\0';
        cout<<p4<<endl;
    }
    return 0;
}

