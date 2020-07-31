#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 int isNumber(char *p);
 int main()
 {
 	 int times;
 	 scanf("%d",&times);
 	 while(times--)
 	 {
 	 	char zheng[1000];
 	 	char *p=zheng;
 	 	scanf("%s",zheng);
 	 	getchar();
 	 	printf("%d\n",isNumber(p));
	 }
	 return 0;
 }
  int isNumber(char *p)
 {
 	 int i,n=strlen(p),flag=0;
 	 for(i=0;i<n;i++)
 	    {
 	    	if(p[i]<'0'||p[i]>'9')
 	    	  return -1;
		}
	 for(i=0;i<n;i++)
	    {
	    	if(p[i]!='0')
	    	  break;
	    	else
	    	  {
	    	  	int j;
			   for(j=i;j<n-i-1;j++)
	    	     {
	    	     	p[j]=p[j+1];
				 }
				i--;
				flag++;
		      }
		}
	 p[n-flag]='\0';
	 /*for(i=0;i<n-flag;i++)
	    {
	    	num[i]=p[i]-'0';
		}
	 int member=strlen(num);*/
	 int member;
	 member=atol(p);
	 return member;
 }
