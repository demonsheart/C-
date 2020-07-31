#include<stdlib.h>
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    for(int n=1;n<=10;++n)
    cout<<string(n,' ')+string(21-2*n,'I')+"\n";
    system("pause");
}