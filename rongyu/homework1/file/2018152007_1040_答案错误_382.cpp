#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int isNumber(char *array);
int main()
{
    int time,answer;
    cin>>time;
    while(time--)
    {
        char array[100]={'\0'};
        cin.ignore(2,'\n');
        cin.getline(array,100);
        answer=isNumber(array);
        cout<<answer<<endl;
    }
    return 0;
}
int isNumber(char *array)
{
    int len=strlen(array),a=0,b=0;
    for(a=0;a<len;a++)
    {
        if(*(array+a)>='0'&&*(array+a)<='9')
        {
            b=(*(array+a)-'0'+b)*10;
        }
        else
        {
            return -1;
        }
    }
    return b/10;
}
