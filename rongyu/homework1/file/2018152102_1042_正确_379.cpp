#include<iostream>
#include<cstring>

using namespace std;

int cmp(char * s1,char * s2);

int main() {
    int t;
    char s1[100];
    char s2[100];

    cin>>t;
    while(t--) {
        cin.ignore(10,'\n');
        cin>>s1;
        cin.ignore(10,'\n');
        cin>>s2;

        cout<<cmp(s1,s2)<<endl;
    }

    return 0;
}


int cmp(char * s1,char * s2) {
    int l1 = strlen(s1);
    int l2 = strlen(s2);
    int more = 0;
    int les  = 0;


    if(l1>l2) return 1;
    if(l1<l2) return -1;

    for(int i = 0;i<l1;i++) {
        if(*(s1+i) > *(s2+i)) more++;
        else if(*(s1+i) < *(s2+i)) les++;
    }
    if(more>les) return 1;
    if(more<les) return -1;
    return 0;

}

