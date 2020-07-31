#include<stdio.h>
#include<string.h>
 int main()
 {
 	int times;
 	scanf("%d",&times);
 	while(times--)
    {
	 char sone[1000],stwo[1000];
 	 char *S=sone,*T=stwo;
 	 int lenone,lentwo;
 	 
 	  scanf("%s",S);
 	  getchar();
 	  scanf("%s",T);
 	  getchar();
 	  
 	 printf("%d\n",bijiao(S,T));
    }
	 return 0;
 }
 int bijiao(char *S,char *T)
 {
 	int lenone,lentwo;
 	int s1=0,s2=0;
 	lenone=strlen(S);
    lentwo=strlen(T);
 	  
 	if(lenone>lentwo)
 	  return 1;
 	else if(lenone<lentwo)
 	  return -1;
 	else
 	  {
 	  	int i;
 	  	for(i=0;i<lenone;i++)
 	  	   {
 	  	   	   if(S[i]>T[i])
 	  	   	     s1++;
 	  	   	   if(S[i]<T[i])
 	  	   	     s2++;
		   }
		if(s1>s2)
		  return 1;
		else if(s1<s2)
		  return -1;
		else
		  return 0;
	  }
 }
