#include<iostream>
using namespace std;
void INT(int n);
void CHAR(int n);
void FLOAT(int n);
int main()
{
	int t,n;
	char ch;
	cin>>t;
	while(t--)
	{
		cin>>ch>>n;
		switch(ch)
		{
		case 'I':INT(n);break;
		case 'C':CHAR(n);break;
		case 'F':FLOAT(n);break;
		}
	}
	return 0;
}
void INT(int n)
{
	int a[1000],i,sum=0;
	int *p=new int[n];
	p=a;
	for(i=0;i<n;i++)
		cin>>*p++;
	p=a;
	for(i=0;i<n;i++)
		sum+=*p++;
	cout<<sum/n<<endl;
}

void CHAR(int n)
{
	char str[10000],max;
	int i;
	char *p=new char[n];
	p=str;
	for(i=0;i<n;i++)
		cin>>p++;
	p=str,max=*p;
	for(i=0;i<n;i++,p++)
		if(*p>max)
			max=*p;
		cout<<max<<endl;
}

void FLOAT(int n)
{
	float num[10000],min;
	int i;
	float *p=new float[n];
	p=num;
	for(i=0;i<n;i++)
		cin>>*p++;
	p=num,min=*p;
	for(i=0;i<n;i++,p++)
		if(*p<min)
			min=*p;
		cout<<min<<endl;
}


