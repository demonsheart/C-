#include<iostream>
#include<cstdio>

using namespace std;

int main() {
    char * month[] = {"","January","February"
        ,"March","April","May","June","July","August"
        ,"September","October","November","December"};
    int t;
    int n;

    scanf("%d",&t);
    while(t--) {
        scanf("%d",&n);
        if(n>=1 && n<=12) printf("%s\n",month[n]);
        else printf("error\n");
    }

    return 0;
}

