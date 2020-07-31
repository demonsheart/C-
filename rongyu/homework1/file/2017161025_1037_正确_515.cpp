#include<iostream>
#include<algorithm>
using namespace std;
double ave(int a[],int n)
  {
  	int sum=0;
  	for (int i=0;i<n;i++)
  		sum+=a[i];
  	return sum/n;
   }
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		char type;
		int ele;
		cin>>type>>ele;
		int *fint;
		char *fchar;
		double *fdouble,average; 
		switch(type){
			case 'C': fchar = new char[ele];break;
			case 'I': fint  = new int[ele];break;
			case 'F': fdouble = new double[ele];break;
 		}
		for(int j=0;j<ele;j++)
		{
			if(type=='C')
				cin>>fchar[j];
			else if(type=='I')
				cin>>fint[j];
			else
				cin>>fdouble[j];
			
		}
		if(type=='C')
			{
				sort(fchar,fchar+ele);
				cout<<fchar[ele-1]<<endl;
			}
		else if(type=='I')
			{	average=ave(fint,ele);
				cout<<average<<endl;
			}
		else
 			{
			 sort(fdouble,fdouble+ele);
			 cout<<fdouble[0]<<endl;
 			}
	}
	 
 } 
