#include<iostream>
#include<cstdio>
using namespace std;
int isLegalMonth(int month);
int main()
{
    //freopen("C:\\Users\\241\\Desktop\\in.txt","r",stdin);
    //freopen("C:\\Users\\241\\Desktop\\out.txt","w",stdout);
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        const char *monthList[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
        int month;
        cin>>month;
        if(isLegalMonth(month))
        	cout<<monthList[month-1]<<endl;
        else
        	cout<<"error"<<endl;
    }
    return 0;
}
int isLegalMonth(int month)
{
	int i;
	for(i=1;i<=12;i++)
		if(i==month)
			return 1;
	return 0;
}
