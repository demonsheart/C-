#include<stdio.h>
#include<string.h>
 int main()
 {
 	 int times;
 	 scanf("%d",&times);
 	 while(times--)
 	 {
 	 	char *month[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
 	 	int n;
 	 	scanf("%d",&n);
 	 	if(n>=1&&n<=12)
 	 	  printf("%s\n",*(month+n-1));
 	 	else
 	 	  printf("error\n");
	 }
    
	 return 0;
 }

